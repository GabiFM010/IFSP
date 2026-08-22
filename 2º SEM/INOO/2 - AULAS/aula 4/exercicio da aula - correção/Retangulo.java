public class Retangulo {
    private double base; // nn definiu valores pq o construtor define isso
    private double altura;

    //nn há necessidade de um atributo "area""

    //construtor
    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    // gets e sets
    // esses gets e sets nn seriam necessarios se nn tivesse construtor
    public void setBase(int base) {
        this.base = base;
    }

    public double getBase() {
        return base;
    }

    public double setAltura(double altura) {
        return altura;
    }

    public double getAltura() {
        return altura;
    }

    public double getArea() {
        double area = base * altura;
        return area;    
    }

    public double getPerimetro() {

    }
}
