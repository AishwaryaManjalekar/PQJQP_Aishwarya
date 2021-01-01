package Assignment3;
import java.util.Scanner;
public class FlyodTriangle
{
	public static void main(String[] args)
	{

		int i,j,rows,num=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no of rows");
		rows=sc.nextInt();
		for(i=1;i<=rows;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.print(" "+num+" ");
				++num;
			}
		System.out.println("\n");
		}
		
	}
}

