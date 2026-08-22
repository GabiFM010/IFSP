class Bicicleta {
    // atributos (variáveis de instância)
    private int velocidade = 0;
    private int engrenagem = 1;
    private int cadencia = 0;
    /*private int velocidade = cadencia * engrenagem
        isso aqui só vai ser usado/mexido no começo da compilação
    */

    // construtor
    Bicicleta(int engrenagem) {
        this.engrenagem = engrenagem;
    }

    public Bicicleta(){
    }

    // métodos (comportamentos)
    public void setCadencia(int cadencia) { // set nn retorna nada
        this.cadencia = cadencia;
    }

    private void atualizarVelocidade() { //metodo pra uso interno
        velocidade = cadencia * engrenagem;
    }

    //gets e sets
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

/* pq é feio repetir linha?
    D.R.Y - don´t repeat yourself
    são dois pontos diferentes pra fazer correção. corrige um mas nn corrige o outro por esquecimento por ex.
*/
