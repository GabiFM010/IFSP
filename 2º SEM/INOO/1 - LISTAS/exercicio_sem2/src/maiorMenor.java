/*
    Exercício 2
        Escreva um programa que leia do teclado dois
        números do tipo double e que mostre na tela
        qual dos dois é o maior.
*/

import java.util.Scanner;

public class maiorMenor {
    public static void main ( String [] args ){
        Scanner sc = new Scanner ( System.in );

        System.out.println( "Primeiro numero: " );
        double primNumero = sc.nextDouble();

        System.out.println( "Segundo numero: " );
        double segNumero = sc.nextDouble();

        if ( primNumero > segNumero ){
            System.out.print( "O primeiro numero é o maior." );
        } else {
            System.out.print( "O segundo numero é o maior." );
        }
    }
}
