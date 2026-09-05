
public class Main {
	public static void main ( String[] args ) {
		Promocao promo = new Promocao();
		
		double y = 10.5;
		double res = promo.triplicar((int)y);
		System.out.println(res);
		
		int w = (int)y;
		
		int z = 15;
		res = promo.triplicar(z);
		System.out.println(res);
	}
}
