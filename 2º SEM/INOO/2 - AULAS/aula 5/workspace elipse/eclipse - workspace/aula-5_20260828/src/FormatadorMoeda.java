
public class FormatadorMoeda {
	public String formatar (double valor) {
		System.out.println("formatador(double");
		return String.format("R$ %.2f", valor);
	}
	
	public String formatar(int centavos) { // evitar repetição, usou um metodo dentro do outro
		System.out.println(("formatador(int"));
		double valor = centavos / 100.0; 
		return formatar(valor);
	}
}

/*pq dividir por 100.0 e não 100? tem a ver, na vdd, com os tipos.
tem um inteiro ali e eu quero deixar claro
 que um numero int vai ser dividido por um double*/