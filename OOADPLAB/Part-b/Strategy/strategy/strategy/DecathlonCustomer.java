package strategy;

public class DecathlonCustomer {
    String name;
    int age;
    iDiscountCalculator iCC;
    
    DecathlonCustomer(String name,int age){
    	this.name = name;
    	this.age = age;
    }
    
    public void calculateDiscount(double mrptotal) {
    	iCC.calculateBillAmount(mrptotal);
    }
    public void display() {
    	System.out.println("Name is "+name+ " \nAge is "+age); 
    }

}