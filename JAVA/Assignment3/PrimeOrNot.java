import java.util.Scanner;
class PrimeOrNot
{
	public static void main(String[] args)
	{
	    int n,i,count=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a no");
		n=sc.nextInt();
		if(n==1||n==0)
		{
		System.out.println("Is not a prime no");
		}
		else
		{
		for(i=2;i<n;i++)
		if(n%i==0)
		count++;
		}
		if(count>1)
		{
		System.out.println("Is not a prime no");
		}
		else
		{
		System.out.println("Is  a prime no");
		}
	}
}
