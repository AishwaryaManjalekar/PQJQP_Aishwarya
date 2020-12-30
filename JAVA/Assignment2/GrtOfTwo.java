import java.util.Scanner;
public class GrtOfTwo
{
   public static void main(String args[])
   {
	  int num1;
	  int num2;
      System.out.println("enter 2 no ::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  if(num1>num2)
		 System.out.println("The first no "+num1+" is the greatest"); 
	 else
         System.out.println("The second  no "+num2+" is the greatest"); 
   }
}
