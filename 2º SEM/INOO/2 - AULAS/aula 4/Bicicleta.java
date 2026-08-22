class Bicicleta {
    // atributos (variáveis de instância)
    private int velocidade = 0;
    private int engrenagem = 1;
    private int cadencia = 0;

    // construtor
    Bicicleta(int velocidade) {
        this.velocidade = velocidade;
    }

    Bicicleta(){
    }

    // métodos (comportamentos)
    public void setCadencia(int cadencia) { // set nn retorna nada
        this.cadencia = cadencia;
    }

    public int getCadencia(){
        return cadencia;
    }

    void setEngrenagem(int engrenagem) { //o this elimina a necessidade de "nova"("novaEngrenagem)
        this.engrenagem = engrenagem;
    }

    public int getEngrenagem(){
        return engrenagem;
    }

    public int getVelocidade(){
        return velocidade;
    }


    public void frear() {
        cadencia = cadencia - 1;
        velocidade = velocidade - 5;

        if (velocidade < 0) {
            velocidade = 0;
        }

        if (cadencia < 0) {
            cadencia = 0;
        }
    }
}

// defina uma classe pra calcular a area do reatngulo
