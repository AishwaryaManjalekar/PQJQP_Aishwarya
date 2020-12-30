import java.util.Scanner ;
public class GrtHundred
{
   public static void main(String args[])
   {
	  int num1,num2;
	  int sum;
      System.out.println("Enter 2 no's::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
      sum=num1+num2;
	  if(sum>100)
	  System.out.println("The sum of two no's is greater than hundred ="+sum); 
      else
		  System.out.println("The sum of two no's is not greater than hundred ="+sum); 
	  
   }
}