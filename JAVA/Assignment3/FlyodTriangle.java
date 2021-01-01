import java.util.Scanner;
public class FlyodTriangle {
	void details()
	{
		int i,j,rows,num=1;
		System.out.println("Enter no of rows");
		Scanner sc=new Scanner(System.in);
		rows=sc.nextInt();
		for(i=1;i<=rows;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.println(num+"\t");
				++num;
			}
			System.out.println("\n");
		}
	}

	public static void main(String[] args) {
		void details();
		
	}

}
