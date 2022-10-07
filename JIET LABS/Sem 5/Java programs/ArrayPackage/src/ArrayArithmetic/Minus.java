package ArrayArithmetic;
import java.util.Scanner;
/**
 *
 * @author VAIBHAV SARAN
 */
public class Minus {
    public void sum ()
    {
          Scanner scanInt = new Scanner(System.in);
          int a[][]=new int [50][50];
          int b[][]=new int [50][50];
          int c[][]=new int [50][50];
          int m , n ;
          System.out.print("Enter the number of rows: ");
          m = scanInt.nextInt();
          System.out.print("Enter the number of columns: ");
          n = scanInt.nextInt();
          System.out.println("Enter the 1st matrix:");
          for (int i=0;i<m;i++)
              for (int j=0;j<n;j++)
                  a[i][j]=scanInt.nextInt();
          for (int i=0;i<m;i++)
          {
              for (int j=0;j<n;j++)
                    System.out.print(a[i][j]);
              System.out.println();
          }
          System.out.println("Enter the 2nd matrix:");
          for (int i=0;i<m;i++)
              for (int j=0;j<n;j++)
                    b[i][j]=scanInt.nextInt();
          for (int i=0;i<m;i++)
          {
              for (int j=0;j<n;j++)
                    System.out.print(b[i][j]);
              System.out.println();
          }
          System.out.println("The difference is:");
          for (int i=0;i<m;i++)
              for (int j=0;j<n;j++)
                  c[i][j]=a[i][j]-b[i][j];
          for (int i=0;i<m;i++)
          {
              for (int j=0;j<n;j++)
                    System.out.print(c[i][j]);
              System.out.println();
          }        
    }
}
