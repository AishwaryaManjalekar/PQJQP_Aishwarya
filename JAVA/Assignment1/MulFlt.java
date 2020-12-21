import java.util.Scanner;
class MulFlt 
{
public static void main(String[] args)
{
float num1,num2;
float mul;
System.out.println("Enter the length");
Scanner sc=new Scanner(System.in);
num1=sc.nextFloat();
System.out.println("Enter the breadth");
num2=sc.nextFloat();
mul=num1*num2;
System.out.println("Area of square ="+ mul);
}
}