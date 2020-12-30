import java.util.Scanner;
class Swap
{
   public static void main(String args[])
   {
	  int num1,num2;
      System.out.println("Enter 2 no's::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  System.out.println("Enter 2 no's before swapping are " + num1 +"and " + num2 );
      num1=num1+num2;
      num2=num1-num2;
      num1=num1-num2;
	  System.out.println("Enter 2 no's after swapping are " + num1 +"and " + num2 );
	  
   }
}