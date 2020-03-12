package adapter;

public class SwedenTax implements CalcTax {
	public double tax_amount;
    public double taxAmount(String item, int qty, double price) {
        tax_amount = price*qty*0.05f;
        return tax_amount;
    }

}