// Java program to demonstrate read and write of image 
import java.io.File; 
import java.io.IOException; 
import java.awt.image.BufferedImage; 
import javax.imageio.ImageIO; 
  
public class read1 
{ 
    public static void main(String args[])throws IOException 
    { 
        int width = 1600;    //width of the image 
        int height = 1000;   //height of the image 
  
        // For storing image in RAM 
        BufferedImage image = null; 
  
        // READ IMAGE 
        try
        { 
            File input_file = new File("D:\\JIET LABS\\Sem 6\\DIP Lab\\test2.jpg"); //image file path 
  
            /* create an object of BufferedImage type and pass 
               as parameter the width,  height and image int 
               type.TYPE_INT_ARGB means that we are representing 
               the Alpha, Red, Green and Blue component of the 
               image pixel using 8 bit integer value. */
            image = new BufferedImage(width, height, 
                                    BufferedImage.TYPE_INT_ARGB); 
  
             // Reading input file 
            image = ImageIO.read(input_file); 
  
            System.out.println("Reading complete."); 
        } 
        catch(IOException e) 
        { 
            System.out.println("Error: "+e); 
        } 
  
        // WRITE IMAGE 
        try
        { 
            // Output file path 
            File output_file = new File("D:\\JIET LABS\\Sem 6\\DIP Lab\\Out.jpg"); 
  
            // Writing to file taking type and path as 
            ImageIO.write(image, "jpg", output_file); 
  
            System.out.println("Writing complete."); 
        } 
        catch(IOException e) 
        { 
            System.out.println("Error: "+e); 
        } 
    }//main() ends here 
}//class ends here 