//explain the concept of default access specifier 
//and perform two arithmetic operations using the object of two different classes
import java.util.Scanner;
class add
{
	int a,b;
	int sum()
	{
		return a+b;
	}
	add()
	{
		Scanner scanInt = new Scanner(System.in);
		System.out.print("Enter 1st number: ");
		a=scanInt.nextInt();
		System.out.print("Enter 2nd number: ");
		b=scanInt.nextInt();
		int ans;
		ans=sum();
		System.out.println("Sum is: "+ans);
	}
}
class mul
{
	int c,d;
	int prod()
	{
		return c*d;
	}
	mul()
	{
		Scanner scanInt = new Scanner(System.in);
		System.out.print("Enter 1st number: ");
		c=scanInt.nextInt();
		System.out.print("Enter 2nd number: ");
		d=scanInt.nextInt();	
		int ans;
		ans=prod();
		System.out.println("Sum is: "+ans);
	}
	public static void main(String args[])
	{
		add obA= new add();
		mul obM = new mul();
		
	}
}