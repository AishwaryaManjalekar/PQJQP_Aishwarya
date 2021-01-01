import java.util.Scanner;
class PowerBase
{
	public static void main(String[] args)
	{
	    float p,b,i,pow=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter power");
		p=sc.nextFloat();
		System.out.println("enter base");
		b=sc.nextFloat();
		for(i=p;i>0;i--)
		{
		pow=pow*b;
		}
		System.out.println("The value is ="+pow);
		}
}
