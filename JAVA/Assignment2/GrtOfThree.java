import java.util.Scanner;
public class GrtOfThree
{
   public static void main(String args[])
   {
	  int num1;
	  int num2;
	  int num3;
      System.out.println("enter 3 no ::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  num3=sc.nextInt();
	  if(num1>num2&&num1>num3)
		 System.out.println("The first no "+num1+" is the greatest"); 
	 else if(num2>num1&&num2>num3)
         System.out.println("The second  no "+num2+" is the greatest"); 
	 else
		System.out.println("The third  no "+num3+" is the greatest"); 
   }
}
