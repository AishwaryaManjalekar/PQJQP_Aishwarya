package Generic_Examples;
class A<T>
{
	T num;
	void methodToCheck(A<? super Number> a)
	{
		System.out.println("output displayed");
	}
}
public class Demo2 {
public static void main(String[] args)
{
	A<Object> a=new A();
	a.methodToCheck(a);
}
}
