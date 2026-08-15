/*
    Objeto
        estado (caracteristicas)
        comportamentos
aula 3
*/

class Bicicleta{
    // atributos (variaveis de instancia)
    int velocidade = 0;
    int engrenagem = 1;
    int cadencia = 0;

    // construtor - construtuor não tem que ter retorno
    Bicicleta(int velocidade){
        this.velocidade = velocidade; //aqui eu tenh o atributo cadencia que faz parte do metodo cadencia
     // coisa do atributo? ta falando do atributo. o this sempre vai se referis ao atribut la encima (nas definição de variaveis)
    }
    
    // metodos (comportamentos)
    void mudarCadencia(int novaCadencia) {
        this.cadencia = novaCadencia;
    }

    void mudarEngrenagem(int novaEngrenagem) {
        engrenagem = novaEngrenagem;
    }

    void frear() {
        cadencia = cadencia--; //vai frear e a cada freada a vel. diminui. poderia ser "cadencia - 1", "cadencia--", "cadencia-="
        velocidade = velocidade - 5;

        if (velocidade < 0) {
            velocidade = 0;
        }
        if(cadencia < 0){
            cadencia = 0;        
        }
    }
    
}

/*
====== antações =======
 int velocidade = 0; | aqui a bicicleta ta parada
 int engrenagem = 1; |

-- as classes são uma mistura de structs e funções da linguagem c, no começo do java a classe era literalmente isso, se definia funções dentro da structs

metodos podem causar mudança de estado

*/

/*
    class Bicicleta{
    // atributos (variaveis de instancia)
    int velocidade = 0;
    int engrenagem = 1;
    int cadencia = 0;

    // construtor - construtuor não tem que ter retorno
    Bicicleta(int novaVelocidade){
        velocidade = novaVelocidade;
    }
    
    // metodos (comportamentos)
    void mudarCadencia(int novaCadencia) {
        cadencia = novaCadencia;
    }

    void mudarEngrenagem(int novaEngrenagem) {
        engrenagem = novaEngrenagem;
    }

    void frear() {
        cadencia = cadencia--; //vai frear e a cada freada a vel. diminui. poderia ser "cadencia - 1", "cadencia--", "cadencia-="
        velocidade = velocidade - 5;

        if (velocidade < 0) {
            velocidade = 0;
        }
        if(cadencia < 0){
            cadencia = 0;        
        }
    }
    
}
*/
