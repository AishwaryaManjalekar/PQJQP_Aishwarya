import java.util.Scanner;
class Simple 
{
public static void main(String[] args)
{
int SI=0;
int p,r,t;
System.out.println("Enter the value of p,r,t");
Scanner sc=new Scanner(System.in);
p=sc.nextInt();
r=sc.nextInt();
t=sc.nextInt();
SI=(p*r*t)/100;
System.out.println("Simple interest ="+ SI);
}
}