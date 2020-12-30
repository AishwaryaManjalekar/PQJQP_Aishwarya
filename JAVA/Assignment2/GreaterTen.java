import java.util.Scanner;
public class GreaterTen
{
   public static void main(String args[])
   {
	  int num;
      System.out.println("enter a no ::");
      Scanner sc = new Scanner(System.in);
	  num=sc.nextInt();
	  if(num>10)
		 System.out.println("The entered no is greater than 10 ="+ num); 
	 else
		 System.out.println("The entered no is not greater than 10 ="+ num); 
   }
}
