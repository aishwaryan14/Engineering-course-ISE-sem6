package factory;

public abstract class Customer {

	public abstract void printRate();
	public abstract void printCustomer();
	
	Customer(){
		printCustomer();
		printRate();
	}
}
