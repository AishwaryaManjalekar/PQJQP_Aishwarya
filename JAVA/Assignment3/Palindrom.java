import java.util.Scanner;
class Palindrom
{
	public static void main(String[] args)
	{
	    int n,num,rem,rev=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the no");
		num=sc.nextInt();
		n=num;
		do
		{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
		}
		while(num!=0);
		{
	    System.out.println("reverse no="+rev);
		}
        if (n==rev)
            System.out.println("the number is palindrom");
            else
            System.out.println("the number is not a palindrom");
	}
}
