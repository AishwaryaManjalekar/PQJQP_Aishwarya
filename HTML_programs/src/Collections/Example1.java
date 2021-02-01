package Collections;

import java.util.ArrayList;
import java.util.Iterator;

public class Example1 {

	public static void main(String[] args) {
		ArrayList l=new ArrayList();
		l.add("aishi");
		l.add("pooji");
		l.add("sharath");
		
		l.add(1,"ritti");

		
		System.out.println(l);
		
		/*for(String s : l)
		{
			System.out.println(s);
		}*/
		
		Iterator<String> listiterator=l.listIterator();
		while(listiterator.hasNext())
		{
			String s1=listiterator.next();
			System.out.println(s1);
			if(s1.equals("aishi"));
			{
				
			}
		}
		System.out.println(l);
	}

}
