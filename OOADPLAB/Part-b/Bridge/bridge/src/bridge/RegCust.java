package bridge;

public class RegCust extends DecathlonCustomer{

	RegCust(String name, int age) {
		super(name, age);
	}
	public void display() {
		System.out.println("Hello Regular Customer and Welcome Back!");
		super.display();
	}
	
}
