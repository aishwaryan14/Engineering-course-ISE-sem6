package factory;

public class CustomerFactory {
	public Customer category(String ptype) {
		if(ptype.equalsIgnoreCase("Teen"))
			return new Teens();
		else if(ptype.equalsIgnoreCase("Aged"))
			return new Aged();
		else if(ptype.equalsIgnoreCase("Kids"))
			return new Kids();
		return null;
				
	}
}
