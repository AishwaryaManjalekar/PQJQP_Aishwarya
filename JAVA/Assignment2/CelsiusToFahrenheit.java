import java.util.Scanner;
class CelsiusToFahrenheit
{
	
	public static void main(String[] args)
	{
	float f=0;
	float c=0;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the temperature");
	c=sc.nextFloat();
	f=c*9/5+32;
	System.out.println("temperature in fahrenheit="+f);
	}
}
	