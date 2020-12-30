import java.util.Scanner;
public class DivisibleBySeven
{
   public static void main(String args[])
   {
	  int num;
      System.out.println("enter a no ::");
      Scanner sc = new Scanner(System.in);
	  num=sc.nextInt();
	  if(num%7==0)
		 System.out.println("The entered no is divisible than 7 ="+ num); 
	 else
		 System.out.println("The entered no is not divisible than 7 ="+ num); 
   }
}
