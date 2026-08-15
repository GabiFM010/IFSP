import java.util.Scanner;

public class Exercicio02 {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("x: ");
        double x = sc.nextDouble();

        System.out.print("x: ");
        double y = sc.nextDouble();
        
        if (x > y) {
            System.out.println("x é o maior");
        } else if (y > x) {
            System.out.println("y é o maior");
        } else if (x == y) {
            System.out.println("x e y são iguais");
        } 
    }
}

