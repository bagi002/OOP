package zad1;

public class Pravougaonik {
	private double a;
	private double b;
	
	public Pravougaonik() {
		this.a = 1;
		this.b = 2;
	}
	
	public Pravougaonik(double a, double b){
		this.a = a;
		this.b = b;
	}
	
	public Pravougaonik(Pravougaonik x) {
		this.a = x.a;
		this.b = x.b;
	}
	
	public double getA() {
		return a;
	}
	
	public double getB() {
		return b;
	}
	
	public double getO() {
		return 2*a + 2*b;
	}
	
	public double getP() {
		return a*b;
	}
}
