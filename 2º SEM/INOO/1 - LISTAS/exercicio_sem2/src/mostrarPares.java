/*
    Exercício 4
        Escreva um programa que mostre na
        tela os números pares de 1 a 10,
        um por linha. Use o comando while.
*/

public class mostrarPares {
    public static void main(String[] args) {
        int numero = 2;

        while ( numero <= 10 ) {
            System.out.println( "Numero " + numero + "." );
            numero += 2;
        }
    }
}
