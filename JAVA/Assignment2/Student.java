import java.util.Scanner;
public class Student
{
   public static void main(String args[])
   {
      int marks;
      System.out.println("enter total marks ::");
      Scanner sc = new Scanner(System.in);
	  marks=sc.nextInt();
	     if(marks>=90)
             System.out.println("A GRADE");
        else if(marks>=80&&marks<90)
             System.out.println("B GRADE");
        else if(marks>=60&&marks<80)
             System.out.println("C GRADE");
        else if(marks>=45&&marks<60)
             System.out.println("D GRADE");
        else
             System.out.println("FAILED");

   }
}