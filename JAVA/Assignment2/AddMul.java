import java.util.Scanner;
public class AddMul
{
   public static void main(String args[])
   {
	  int num1;
	  int num2;
	  int sum=0,mul=0;
      System.out.println("enter 2 no ::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  sum=num1+num2;
	  mul=num1*num2;
	  System.out.println("The addition of two no's is ="+ sum );
	  System.out.println(" The multiplication of two no's is=" +mul);
	  if(sum>mul)
	  {
		  System.out.println("sum is greater"+ sum);
	  }
	  else
		  System.out.println("multiplication is greater"+ sum);
   }
}
