package zad3;

import zad1.Krug;
import zad2.Pravougaonik;

public class Valjak {
	
	private Krug B;
	private Pravougaonik M;

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Pravougaonik p1 = new Pravougaonik(2, 8);
		Krug k1 = new Krug(5);
	}
	
	
	public Valjak() {
		B = new Krug(1);
		M = new Pravougaonik(B.getO(), 10);
	}
	
	public Valjak(double r, double h) {
		B = new Krug(r);
		M = new Pravougaonik(B.getO(), h);
	}
	
	public Valjak(Valjak v) {
		this.B = new Krug(v.B);
		this.M = new Pravougaonik(v.M);
	}
	
	public double getR() {
		return B.getR();
	}


	@Override
	public String toString() {
		return "Valjak [getR()=" + getR() + "]";
	}
	


}
