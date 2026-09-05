package aula_06;

public class OperacoesTest {
	public static void main(String[] args) {
		
		int res = Operacoes.somar(5, 9);
		int res1 =  Operacoes.subt(8, 7);
		float res2 = Operacoes.mult(5, 4);
		float res3 = Operacoes.divs(7, 8);
		
		System.out.println("Resultado da soma: " + res);
		System.out.println("Resultado da subtração: " + res1);
		System.out.println("Resultado da multiplicação: " + res2);
		System.out.println("Resultado da divisão: " + res3);
		
	}
}
