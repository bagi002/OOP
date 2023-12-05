package zad1;

public class Krug {
	private double r;
	
	public Krug() {
		this.r = 1;
	}
	
	public Krug(double r) {
		this.r = r;
	}
	
	public Krug(Krug k) {
		this.r = k.r;
	}
	
	public double getR() {
		return this.r;
	}
	
	public void setR(double r) {
		this.r = r;
	}
	
	public double getO() {
		return 2*r*Math.PI;
	}
	
	public double getP() {
		return Math.pow(r,  2) * Math.PI;
	}
}
