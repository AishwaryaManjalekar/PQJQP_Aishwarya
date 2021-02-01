package Collections;

import java.util.ArrayList;
import java.util.Iterator;

class shopping {
	String product;
	int quantity;
	double price;

	public shopping(String product, int quantity, double price) {
		this.product = product;
		this.quantity = quantity;
		this.price = price;
	}

	@Override
	public String toString() {
		return  product + "\t" + quantity + "\t" + price ;
	}

}

public class SuperMarket {

	public static void main(String[] args) {
		ArrayList<shopping> shop = new ArrayList();
		shop.add(new shopping("milk", 1, 20));
		shop.add(new shopping("apple", 2, 200));
		shop.add(new shopping("banana", 3, 20));
		shop.add(new shopping("chocolate", 3, 50));
		shop.add(new shopping("coconut", 1, 20));
		System.out.println("Product \t Qty \t Price");
		double total=0.0;

		Iterator<shopping> listiterator = shop.listIterator();
		while (listiterator.hasNext()) {
			shopping s1 = listiterator.next();
			total+=(s1.quantity*s1.price);
			System.out.println(s1);
		}
		System.out.println("the total amout payable is"+total);
		
		
	}
}
