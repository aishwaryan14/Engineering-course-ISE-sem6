package factory;

public class Aged extends Customer{

	public void printRate() {
		System.out.println("Discount for aged : 8%");
	}

	public void printCustomer() {
		System.out.println("Belongs to aged group");
	}

}
