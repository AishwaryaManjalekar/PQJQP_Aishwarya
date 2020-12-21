import java.util.Scanner;
class Add 
{
public static void main(String[] args)
{
int num1,num2;
int sum=0;
System.out.println("Enter the 2 no's");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
sum=num1+num2;
System.out.println(sum);
}
}