import java.util.Scanner;
public class ChangeCase
{
   public static void main(String args[])
   {
	  char ch;
	  int temp;
      System.out.println("press a key::");
      Scanner sc = new Scanner(System.in);
	  ch=sc.next().charAt(0);
	  if(ch>96&&ch<123)
	  {
		 temp =(int) ch;
	     temp =temp-32;
	     ch=(char) temp;
	     System.out.println(ch); 
	  }
      else if(ch>64&&ch<91)
	  {
		 temp =(int) ch;
	     temp =temp+32;
	     ch=(char) temp;
	     System.out.println(ch); 
	  }
      else	
	  {
		  System.out.println("not an alphabet"); 
	  }		  
   }
}