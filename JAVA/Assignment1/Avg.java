import java.util.Scanner;
class Avg 
{
public static void main(String[] args)
{
int avg=0;
int a,b,c,d,e;
System.out.println("Enter the 5 no's");
Scanner sc=new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
d=sc.nextInt();
e=sc.nextInt();
avg=(a+b+c+d+e)/5;
System.out.println("average  ="+ avg);
}
}