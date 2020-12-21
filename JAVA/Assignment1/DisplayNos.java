import java.util.Scanner;
class DisplayNos 
{
public static void main(String[] args)
{
int num1;
float num2;
char a;
System.out.println("ENTER AN INTEGER,FLOAT,CHARACTER");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextFloat();
a=sc.next().charAt(0);
System.out.println("integer value ="+num1);
System.out.println("float value="+num2);
System.out.println("character value="+a);
}
}