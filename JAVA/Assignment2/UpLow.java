import java.util.Scanner;
public class UpLow
{
   public static void main(String args[])
   {
	  char ch;
      System.out.println("press a key::");
      Scanner sc = new Scanner(System.in);
	  ch=sc.next().charAt(0);
	  if(ch>='A'&&ch<='Z')
		 System.out.println("The entered key is a UPPERCASE ="+ ch); 
	 else
		 System.out.println("The entered key is not a LOWERCASE ="+ch); 
   }
}