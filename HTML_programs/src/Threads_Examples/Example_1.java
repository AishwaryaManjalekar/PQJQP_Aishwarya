package Threads_Examples;

public class Example_1 {

	public static void main(String[] args) {
		Thread t=Thread.currentThread();
		/*This below line will give output as "main"*/
		System.out.println(t.getName());
		
		/*This below line will give output as "1"*/
		System.out.println(t.getId());
		
		/*This below line will give output as "5"*/
		System.out.println(t.getPriority());
		
		/*This below line will give output as "class java.lang.Thread"*/
		System.out.println(t.getClass());
		
		/*This below line will give output as "[Ljava.lang.StackTraceElement;@2a33fae0"*/
		System.out.println(t.getStackTrace());
		
		/*This below line will give output as "jdk.internal.loader.ClassLoaders$AppClassLoader@707f7052"*/
		System.out.println(t.getContextClassLoader());
	}

}
