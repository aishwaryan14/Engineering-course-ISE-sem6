package factory;

public class FactoryMain {
	public static void main(String[] args) {
		Customer c;
		CustomerFactory cf = new CustomerFactory();
		c = cf.category("Teen");
		c = cf.category("Kids");
	}
}
