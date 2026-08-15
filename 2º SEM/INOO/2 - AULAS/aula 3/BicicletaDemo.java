class BicicletaDemo {
    public static void main(String[] args) {
        //Bicicleta b1 = new Bicicleta();
        Bicicleta b1 = new Bicicleta(10);

        System.out.printf("[%s] velocidade: %d, engrenagem: %d, cadencia: %d\n", "b1", b1.velocidade, b1.engrenagem, b1.cadencia);
        
            b1.mudarCadencia(30);
            System.out.printf("[%s] velocidade: %d, engrenagem: %d, cadencia: %d\n", "b1", b1.velocidade, b1.engrenagem, b1.cadencia);

            b1.frear();
            b1.frear();
            System.out.printf("[%s] velocidade: %d, engrenagem: %d, cadencia: %d\n", "b1", b1.velocidade, b1.engrenagem, b1.cadencia);                      
    }
}

/*
=== anotações ===
new Bicicleta() -> sempre que usar o new tem que passat a variael como chamada de função

aqui passa a principal e o javac compila tudo
*/
