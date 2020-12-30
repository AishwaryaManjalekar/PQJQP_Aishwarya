import java.util.Scanner;
public class VowelOrConsonent
{
   public static void main(String args[])
   {
	  char ch;
      System.out.println("press a key::");
      Scanner sc = new Scanner(System.in);
	  ch=sc.next().charAt(0);
	  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		 System.out.println("The entered key is a vowel ="+ ch); 
	 else
		 System.out.println("The entered key is a consonent ="+ch); 
   }
}