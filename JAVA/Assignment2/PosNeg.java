import java.util.Scanner;
public class PosNeg
{
   public static void main(String args[])
   {
	  int num;
      System.out.println("enter a no ::");
      Scanner sc = new Scanner(System.in);
	  num=sc.nextInt();
	  if(num>0)
		 System.out.println("The entered no is even ="+ num); 
	 else
		 System.out.println("The entered no is odd ="+ num); 
   }
}
