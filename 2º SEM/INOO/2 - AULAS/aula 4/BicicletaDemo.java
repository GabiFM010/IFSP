class BicicletaDemo { //a classe é a forminha que modela a areia
    public static void main(String[] args) {

        // Bicicleta bike = new Bicicleta();
        Bicicleta bike = new Bicicleta(10); //criando objeto novo dentro da classe bicicleta, criado no Heap
        System.out.printf(
                "[%s] velocidade: %2d, engrenagem: %2d, cadência: %2d\n",
                "bike",
                bike.getVelocidade(), bike.getEngrenagem(), bike.getCadencia());

        bike.mudarCadencia(30);//permitindo alteração que não foi o metodo que fez
        bike.velocidade = 0; 
        System.out.printf(
                "[%s] velocidade: %2d, engrenagem: %2d, cadência: %2d\n",
                "bike",
                bike.getVelocidade(), bike.getEngrenagem(), bike.getCadencia());

        bike.frear();
        bike.frear();
        System.out.printf(
                "[%s] velocidade: %2d, engrenagem: %2d, cadência: %2d\n",
                "bike",
                bike.getVelocidade(), bike.getEngrenagem(), bike.getCadencia());
    }
}
