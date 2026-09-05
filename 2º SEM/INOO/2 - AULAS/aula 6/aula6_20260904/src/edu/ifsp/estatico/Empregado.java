package edu.ifsp.estatico;

public class Empregado {
	private int id; 
	private static int cont = 0;
	// quer que quem veja o codigo saiba que é importante que cont comece em 0
	//atribuiu como atributo statico por que quer que ele vai ser usado em todos
	
	//construtor
	public Empregado() {
		cont++;
		id = cont;
	}
	
	public int getId() {
		return id;
	}
}
