import java.util.Scanner;
class Circle 
{
public static void main(String[] args)
{
double pi=3.142;
float r;
double area;
System.out.println("Enter the radius");
Scanner sc=new Scanner(System.in);
r=sc.nextFloat();
area=pi*r*r;
System.out.println("Area of circle ="+ area);
}
}