import java.util.Scanner ;
public class AvgOfFive
{
   public static void main(String args[])
   {
	  float num1,num2,num3,num4,num5;
	  float avg=0;
      System.out.println("Enter 5 no's::");
      Scanner sc = new Scanner(System.in);
	  num1=sc.nextInt();
	  num2=sc.nextInt();
	  num3=sc.nextInt();
	  num4=sc.nextInt();
	  num5=sc.nextInt();
	  avg=(num1+num2+num3+num4+num5)/5;
		 System.out.println("The avg value is ="+avg); 
   }
}