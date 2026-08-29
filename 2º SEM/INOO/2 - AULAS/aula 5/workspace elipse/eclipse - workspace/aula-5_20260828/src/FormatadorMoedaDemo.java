
public class FormatadorMoedaDemo {
	public static void main(String[] args) {
		FormatadorMoeda formatador = new FormatadorMoeda();
		
		String res = formatador.formatar(5.10);
		System.out.println(res);
		
		res = formatador.formatar(510);
		System.out.println(res);
		
	}
}
/* um caso de sobrecarga e metodos */