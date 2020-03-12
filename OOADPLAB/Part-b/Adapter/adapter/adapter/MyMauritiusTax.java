package adapter;

public class MyMauritiusTax implements CalcTax {
	NewMauritiusTax mt = new NewMauritiusTax();
    public double tax_amount = 0.0;
    public double taxAmount(String item, int qty, double price) {
        // TODO implement here
    	tax_amount = mt.calcTax(qty,price);
        return tax_amount;
    }
}