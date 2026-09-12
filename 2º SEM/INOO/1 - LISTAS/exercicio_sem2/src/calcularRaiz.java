/*
Exercício 3
    Escreva um programa que leia um número
    real x do teclado e mostre na tela a raiz
    quadrada de x. A raiz quadrada só pode
    ser calculada se x >= 0. Caso contrário,
    o programa deve exibir uma mensagem de erro.

*/

import java.util.Scanner;

public class calcularRaiz {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um número para calcular a sua raiz: ");
        double numero = sc.nextDouble();

        double raiz = Math.sqrt(numero);

        if ( numero > 0 ) {
            System.out.print(" A raiz é: " + raiz);
        } else if ( numero <= 0 ) {
            System.out.print("Numero inválido!");
        }
    }
}
