package strategy;

public class RegCustomer extends DecathlonCustomer {
	public RegCustomer() {
		super("Ben",20);
		iCC = new DiscountType1(); 
		
	} 
	public void display() { 
		
		System.out.println("\nHello Regular Customer! Welcome Back..."); 
		super.display(); 
	}

}