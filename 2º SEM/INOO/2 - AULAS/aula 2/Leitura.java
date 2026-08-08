import java.util.Scanner;

public class Leitura {
    public static void main(String[] args ){
        Scanner sc = new Scanner(System.in);

        System.out.print("Idade: ");
        int idade = sc.nextInt();

        System.out.printf("Você tem %d anos.\n",idade);
    }
}

