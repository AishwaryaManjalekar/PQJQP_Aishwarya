import java.util.Scanner;
public class InEquality
{
   public static void main(String args[])
   {
	  int num1;
	  int num2;
      System.out.println("enter 2 no's ::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  if(num1!=num2)
		 System.out.println("The entered no is not  equal ="+ num1 +" and "+num2); 
	 else
		 System.out.println("The entered no is equal ="+num1 +" and "+num2); 
   }
}
