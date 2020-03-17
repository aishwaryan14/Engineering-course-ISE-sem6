package bridge;

public class SeniorCitizenCust extends DecathlonCustomer{

	SeniorCitizenCust(String name, int age) {
		super(name, age);
	}
	public void display() {
		System.out.println("Hello and welcome!");
		super.display();
	}
	

}
