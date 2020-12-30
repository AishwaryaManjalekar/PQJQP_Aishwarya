import java.util.Scanner;
public class LeapYear
{
   public static void main(String args[])
   {
	  int num;
      System.out.println("Enter the year::");
      Scanner sc = new Scanner(System.in);
	  num=sc.nextInt();
	  if (((num % 4 == 0) && (num % 100 != 0)) || (num % 400 == 0))
		 System.out.println("The entered year is a leap year ="+ num); 
	 else
		 System.out.println("The entered is not a leap year ="+num); 
   }
}