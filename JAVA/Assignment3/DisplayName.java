import java.util.Scanner;
class DisplayName
{
	public static void main(String[] args)
	{
		String a;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a name");
		a=sc.next();
		for(int i=0;i<5;i++)
		{
			System.out.println("name="+a);
		}
	}
}
