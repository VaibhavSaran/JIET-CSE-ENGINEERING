/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package student;
import java.util.Scanner;

/**
 *
 * @author VAIBHAV SARAN
 */
public class Student {

    /**
     * @param args the command line arguments
     */
    String s_name;
    String f_name;
    int roll_no;
    int[] marks;
    String clas;
    String Grade;
    float per;
     public void input()
    {
        Scanner scanLine = new Scanner(System.in);
        Scanner scanInt = new Scanner(System.in);
        System.out.print("Enter Student name: ");
        s_name = scanLine.nextLine();
        System.out.print("Enter Father name: ");
        f_name = scanLine.nextLine();
        System.out.print("Enter roll number: ");
        roll_no = scanInt.nextInt();
        System.out.print("Enter the class: ");
        clas = scanLine.nextLine();
        marks = new int[3];
        System.out.println("Enter the marks(out of 100):");
        for (int i=0;i<3;i++)
        {
            System.out.print("Enter the marks of subject " + i+1 + ": ");
            marks[i]=scanInt.nextInt();
        }
        for (int i=0;i<3;i++)
            per+=marks[i];
        per=per/3;
        if (per >= 80)
            Grade = "A";
        else if (per >= 60)
                Grade = "B";
        else if (per >= 40)
                Grade = "C";
        else
            Grade = "F";
    }
   public void output()
   {
       System.out.println("Student Name: " + s_name);
       System.out.println("Father Name: " + f_name);
       System.out.println("Roll Number: " + roll_no);
       System.out.println("Student Name: " + clas);
       for(int i=0;i<3;i++)
           System.out.println("Marks of Sub " + i+1 + ": " + marks[i] );
       System.out.println("Grade: " + Grade);
       System.out.println("Percentage: " + per);
   }
   public float rePer()
   {
       return per;
   }
     public static void main(String[] args) {
        // TODO code application logic here
       Student []ob = new Student[3];    
        ob[0] = new Student(); 
        ob[1] = new Student(); 
        ob[2] = new Student(); 
        ob[0].input();
        ob[1].input();
        ob[2].input();
        float max;
        int mi;
        for (int i=0; i<3 ; i++)
        {
            max=ob[i].rePer();
            mi = i;
            for (int j=i;j<3;j++)
                if(ob[j].rePer()>max)
                {
                    max = ob[j].rePer();
                    mi=i;
                }
            ob[mi].output();
            System.out.println("");
        }
    } 
}