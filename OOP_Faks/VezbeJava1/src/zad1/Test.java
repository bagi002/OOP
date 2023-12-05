package zad1;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Krug k1 = new Krug();
		Krug k2 = new Krug(5);
		Krug k3 = new Krug(k2);
		Pravougaonik p1 = new Pravougaonik();
		
		System.out.println(k1.getO() + " " + k1.getP() + " " + k1.getR());
		System.out.println(k2.getO() + " " + k2.getP() + " " + k2.getR());
		System.out.println(k3.getO() + " " + k3.getP() + " " + k3.getR());
	}

}
