package Threads_Examples;
class running extends Thread
{
	void running_race()
	{
		for(int i=0;i<0;i++)
			System.out.println("running at"+i);
	}		
}
public class Example_2 {

	public static void main(String[] args) {
		running raj=new running();
		raj.start();

	}

}
