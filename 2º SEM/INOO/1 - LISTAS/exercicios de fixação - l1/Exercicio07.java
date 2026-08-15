/*
    O programa listado a seguir deveria ficar tentando até descobrir um número que o usuário estiver pensando. Complete o código para que o programa funcione corretamente.
*/

// Thread.sleep(500);

import java.util.Scanner;

public class Exercicio07 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Pense em um número de 1 a 100.");
		System.out.println("Eu vou descobrir.");

		int x = 18;
		System.out.printf("Você pensou em %d.\n\n", x);

		System.out.println("Acertei?");
		System.out.printf("  1. Sim\n");
		System.out.printf("  2. Pensei em um número *menor* do que %d.\n", x);
		System.out.printf("  3. Pensei em um número *maior* do que %d.\n", x);
		System.out.print("Resposta [1-3]: ");
		int resp = sc.nextInt();
	}
}
