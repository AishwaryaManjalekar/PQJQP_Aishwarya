import java.util.Scanner;
class Counting
{
	public static void main(String[] args)
	{
	    int num,count=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a no");
		num=sc.nextInt();
		while(num>0)
		{
		num=num/10;
		count++;
		}
		System.out.println("The count is ="+count);
		}
}
