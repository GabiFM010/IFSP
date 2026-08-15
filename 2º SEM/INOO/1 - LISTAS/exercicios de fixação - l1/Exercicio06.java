/*
    Escreva um programa que leia números inteiros do teclado continuamente, até o que usuário digite o valor 0 (zero). O programa deve mostrar na tela o maior número lido e quantidade de valores digitados, exceto o último zero.
*/

import java.util.Scanner;

public class Exercicio06 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int cont = 0;
        int maior = 0;
        while (true){
            System.out.print("x: ");
            int x = sc.nextInt();
            if (x == 0) break;

            cont ++;
            if (x > maior){
                maior = x;
            }        
        }
        
        System.out.printf("Maior: %d\n", maior);
        System.out.printf("%d numeros lidos\n", cont);

    }
}
