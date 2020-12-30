import java.util.Scanner;
public class Vote
{
   public static void main(String args[])
   {
	  int age;
      System.out.println("Enter the age of candidate ::");
      Scanner sc = new Scanner(System.in);
	  age=sc.nextInt();
	  if(age>=18)
		 System.out.println("The candidate is eligible to vote ="+ age); 
	 else
		 System.out.println("The candidate is not eligible to vote ="+ age); 
   }
}
