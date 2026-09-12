/*
    Exercício 1

        Sabendo que o metodo Math.sqrt(x) retorna a raiz quadrada
        de um número x, insira a linha de código necessária para
        que o programa abaixo compile e funcione corretamente.
        Não é preciso importar a classe Math.
        Não apague nada no código inicial, apenas insira a nova linha.
 */

public class Raiz {
    public static void main ( String[] args ) {

        double x = 25;
        double res = Math.sqrt ( x );

        System.out.println ( "raiz de " + x + " = " + res );
    }
}