public class pattern
{
	public static void main(String [] args)
	{
		p1();
		p2();
		p3();
		p4();
		p5();
		p6();
		p7();
		p8();
		p9();
		p10();
		p11();
		p12();
	}
	static void p1()
	{
		int n=5;
		for(int i=0;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				System.out.print(i);
			System.out.println();
		}
	}
	static void p2()
	{
		int n=5;
		for(int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
				System.out.print(" ");
			if(i%2==0)
				for(int k=0;k<=i;k++)
					System.out.print(k+1);
			else
			{
				char ch='A';
				for(int k=0;k<=i;k++)
				{
					System.out.print(ch);
					ch++;
				}
			}
			System.out.println();
		}
	}
	static void p3()
	{
		int n=5,count=1;
		for(int i=0;i<n;i++)
		{
			for (int j=n;j>i;j--)
				System.out.print("  ");
			for (int k=0;k<=i;k++)
			{
				System.out.print(count+"  ");
				count++;
			}
			System.out.println();
		}
	}
	static void p4()
	{
		int n=5;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<i;j++)
				System.out.print(i);
			System.out.println();
		}
		for (int i=0;i<n;i++)
		{
			char ch='A';
			for(int j=n-1;j>i;j--)
			{
				System.out.print(ch);
				ch++;
			}
			System.out.println();	
		}
	}
	static void p5()
	{
		int n=5;
		for(int i=0;i<n;i++)
		{
			for (int j=n;j>i;j--)
				System.out.print("*");
			System.out.println(" ");
		}
		for (int i=1;i<n;i++)
		{
			for(int j=0;j<=i;j++)
				System.out.print("*");
			System.out.println(" ");
		}
		System.out.println();
	}
	static void p6()
	{
		int n=5;
		for(int i=0;i<n;i++)
		{
			for(int k=0;k<i;k++)
				System.out.print(" ");
			for (int j=n;j>i;j--)
				System.out.print("*");
			System.out.println(" ");
		}
		for (int i=1;i<n;i++)
		{
			for (int k=n-1;k>i;k--)
				System.out.print(" ");
			for(int j=0;j<=i;j++)
				System.out.print("*");
			System.out.println(" ");
		}
	}
	static void p7()
	{
		int n=5;
		for (int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
				System.out.print("* ");
			for(int k=0;k<i;k++)
				System.out.print("  ");
			for(int m=0;m<i;m++)
				System.out.print("  ");
			for (int l=n;l>i;l--)
				System.out.print("* ");
			System.out.println("");
		}
		int x=10;
		for (int i=0;i<n-1;i++)
		{
			for(int j=0;j<x;j++)
			{
				if(j==0||j==x-1)
					System.out.print("* ");
				else
					System.out.print("  ");//two space so as to do allignment as in previous loops there is space after *
			}
			System.out.println("");
		}
		for(int i=0;i<x;i++)
			System.out.print("* ");
		System.out.println("");
	}
	static void p8()
	{
		int n=4,x=2*n-1;
		for(int i=0;i<n-1;i++)
		{
			for (int j=0;j<n-1;j++)
				System.out.print("  ");
			System.out.println("*");
		}
		for(int i=0;i<x;i++)
			System.out.print("* ");
		System.out.println("");
		for(int i=0;i<x;i++)
			System.out.print("* ");
		System.out.println("");
		for(int i=0;i<n-1;i++)
		{
			for (int j=0;j<n-1;j++)
				System.out.print("  ");
			System.out.println("*");
		}	
		System.out.println("");
	}
	static void p9()
	{
		System.out.println();
		int n=5;
		for (int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
				System.out.print("* ");
			for(int k=0;k<i;k++)
				System.out.print("  ");
			for(int m=0;m<i;m++)
				System.out.print("  ");
			for (int l=n;l>i;l--)
				System.out.print("* ");
			if(i!=n-1)
				System.out.println("");
		}
		System.out.println();
		for (int i=0;i<n-1;i++)
		{
			for(int j=-1;j<=i;j++)
				System.out.print("* ");
			for (int k=n-2;k>i;k--)
				System.out.print("  ");
			for (int m=n-2;m>i;m--)
				System.out.print("  ");
			for (int l=-1;l<=i;l++)
				System.out.print("* ");
			System.out.println("");
		}
		System.out.println("");
	}
	static void p10()
	{
		int n=5;
		for (int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
				System.out.print(" ");
			for(int k=n;k>i;k--)
				System.out.print("* ");
			System.out.println("");
		}
		for(int i=1;i<n;i++)
		{
			for (int j=1;j<n-i;j++)
				System.out.print(" ");
			for (int k=0;k<=i;k++)
				System.out.print("* ");
			System.out.println("");
		}	
	}
	static void p11()
	{
		int n=7;
		for(int i=0;i<n;i+=2)
		{
			for (int j=n-1;j>i;j--)
				System.out.print(" ");
			for (int k=0;k<=i;k++)
				System.out.print("* ");
			System.out.println("");
		}
		for(int i=0;i<n;i+=2)
		{
			for(int j=0;j<n;j++)
				System.out.print("* ");
			System.out.println();
		}
	}
	static void p12()
	{
		int n=8;
		int x=n/2;
		for(int i=0;i<x-1;i++)
		{
			System.out.print("      ");
			for (int j=2;j<x-i;j++)
				System.out.print(" ");
			for (int k=0;k<=i;k++)
				System.out.print("* ");
			System.out.println("");
		}	
		for (int i=0;i<n-3;i++)
		{
			System.out.print("      ");
			for(int j=0;j<n-i;j++)
				System.out.print("* ");
			System.out.println("");
		}
		for (int i=0;i<x;i++)
		{
			System.out.print("      ");
			for(int j=0;j<=x+i;j++)
				System.out.print("* ");
			System.out.println();
		}
		for(int i=0;i<8;i++)
			System.out.println("      * * *");
		for (int i=0;i<x-1;i++)
		{
			for(int j=0;j<=n;j++)
				System.out.print("* ");
			System.out.println("");
		}
	}	
}