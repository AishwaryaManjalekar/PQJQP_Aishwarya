import java.util.Scanner;
class Mult 
{
public static void main(String[] args)
{
int num1,num2,num3;
int mul=0;
System.out.println("Enter the 3 no's");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
mul=num1*num2*num3;
System.out.println("Multiplication of 3 no's ="+mul);
}
}