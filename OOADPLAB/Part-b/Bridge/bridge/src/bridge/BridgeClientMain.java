package bridge;

public class BridgeClientMain {
	public static void main(String[] args) {
		double mrptotal = 8000;
		RegCust oRC = new RegCust("Ash", 20);
		SeniorCitizenCust oSCC = new SeniorCitizenCust("Ben",75);
		DiscountType1 odtype1= new DiscountType1();
		DiscountType2 odtype2= new DiscountType2();
		oRC.display();
		oRC.setDiscountType(odtype2);
		oRC.calculateDiscount(mrptotal);
		oSCC.display();
		oSCC.setDiscountType(odtype1);
		oSCC.calculateDiscount(mrptotal);
	}
}