import java.util.Scanner;
public class calc
{
	public static void main(String [] args)
	{
		int a,b;
		Scanner scanInt;
		scanInt=new Scanner(System.in);
		System.out.print("Enter 1st number: ");
		a=scanInt.nextInt();
		System.out.print("Enter 2nd number: ");
		b=scanInt.nextInt();
		System.out.println("The sum is: "+(a+b));
	}
}