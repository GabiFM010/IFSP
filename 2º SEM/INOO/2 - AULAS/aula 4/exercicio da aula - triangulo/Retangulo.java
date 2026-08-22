public class Retangulo{ 
    // atributos
    private float base = 10;
    private float altura = 25.6;
    //private float area = 0;

    //construtor
    Retangulo(){
    
    }

    //metodos ou comportamentos
    public void setBase(float base){
        this.base = base;
    }

    public int getBase(){
        return base;    
    }

    public void setAltura(float altura){
        this.altura = altura;
    }

    public int getAltura(){
        return altura;    
    }

    public void Area(){
        area = ((base * altura) / 2);
    }
}
