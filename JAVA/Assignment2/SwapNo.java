import java.util.Scanner;
public class SwapNo
{
   public static void main(String args[])
   {
	  int num1;
	  int num2;
	  int temp;
      System.out.println("enter 2 no's to be swapped ::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  System.out.println("The no's before swapping are "+num1 +" and "+num2);
	  temp=num1;
	  num1=num2;
	  num2=temp;
	  System.out.println("The swapped no's are "+num1 +" and "+num2);
   }
}
