package zad2;

public class Pravougaonik {
 private double a, b;

public Pravougaonik(double a, double b) {
	super();
	this.a = a;
	this.b = b;
}

public double getA() {
	return a;
}

public Pravougaonik() {
	super();
	this.a = 1;
	this.b = 1;
}

public Pravougaonik(Pravougaonik p) {
	super();
	this.a = p.a;
	this.b = p.b;
}

public void setA(double a) {
	this.a = a;
}

public double getB() {
	return b;
}

public void setB(double b) {
	this.b = b;
}

public double getO() {
	return 2*a + 2*b;
}

public double getP() {
	return a*b;
}

}
