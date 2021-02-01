package Generic_Examples;

public class Employee<T,E> {
	public T getId() {
		return id;
	}

	public void setId(T id) {
		this.id = id;
	}
	

	T id;
	E salary ;
	
	boolean compare(Employee<T,? extends Number >e)
	{
		return false;
		
	}
	
}
