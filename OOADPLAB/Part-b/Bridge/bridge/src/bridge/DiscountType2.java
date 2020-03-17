package bridge;

public class DiscountType2 implements iDiscountCalculator {
	double discount;
	double billamount;
	double offamount;
	DiscountType2(){
		discount = 0.22;
	}
	public void calculateBillAmount(double mrptotal){
		if(mrptotal>6000)
			offamount = 250;
		billamount = mrptotal - mrptotal*discount;
		System.out.println("Bill Amount:"+billamount+" for mrp:"+mrptotal+" with off amount:"+offamount);
	}

}
