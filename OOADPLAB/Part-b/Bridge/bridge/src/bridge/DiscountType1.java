package bridge;

public class DiscountType1 implements iDiscountCalculator{
	double discount;
	double billamount;
	DiscountType1(){
		discount = 0.25;
	}
	public void calculateBillAmount(double mrptotal){
	billamount = mrptotal - mrptotal*discount;
	System.out.println("Bill Amount:"+billamount+" for mrp:"+mrptotal);
	}

}
