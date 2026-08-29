
public class FormatarHoraDemo {
	public static void main(String[] args) {
		FormatadorHora fmt = new FormatadorHora();
		
		String res = fmt.formatar(10, 5, 8);
		System.out.println(res);
		
		res = fmt.formatar(36410); // convertendo
		System.out.println(res);
	}
}
