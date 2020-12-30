import java.util.Scanner;
class Calculator
{
	int n;
	int num1,num2;
	int sum=0,sub=0,mul=0,div=0;
	public static void main(String[] args)
	{
		int n;
	    int num1,num2;
	    int sum=0,sub=0,mul=0,div=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter 2 no's");
		num1=sc.nextInt();
		num2=sc.nextInt();
		System.out.println("Choose your option");
		System.out.println("1.Addition");
		System.out.println("2.Substraction");
		System.out.println("3.Multiplication");
		System.out.println("4.Division");
		System.out.println("exit");
		n=sc.nextInt();
		switch(n)
		{
			case 1:System.out.println("1.Addition"); 
                   sum=num1+num2;
                   	System.out.println("Addition="+sum);
					break;
            case 2:System.out.println("2.Substraction"); 
                   sub=num1-num2;
                   	System.out.println("substraction="+sub);
					break;
            case 3:System.out.println("1.multiplication"); 
                   mul=num1*num2;
                   	System.out.println("multiplication="+mul);
					break;
            case 4:System.out.println("division"); 
                   div=num1/num2;
                   	System.out.println("quotient="+div);
					break;
            case 5:System.out.println("exit"); 
			        break;
            default:
               		System.out.println("invalid choice"); 
                     break;					
		}
	}
}
		
