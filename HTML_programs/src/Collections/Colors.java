package Collections;

import java.util.Hashtable;
import java.util.Iterator;
import java.util.TreeSet;

public class Colors 
{

	public static void main(String[] args) {
		TreeSet<String> h=new TreeSet();
		h.add("black");
		h.add("pink");
		h.add("blue");
		h.add("white");
		h.add("red");
		
		Iterator<String> clriterator=h.iterator();
		while(clriterator.hasNext())
		{
			String string=(String) clriterator.next();
			System.out.println(string);
		}
	
	}

}
