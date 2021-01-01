package Assignment3;
import java.util.*;
public class StringReverse
{
	public static void main(String args[]) 
	{
		String original;
		String rev="";
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the string to reverse");
	    original=sc.nextLine();
	    int length=original.length();
        for(int i=length-1;i>=0;i--)
        	rev=rev+original.charAt(i);
         System.out.println("Reversed string: "+rev);
}
}