package edu.ifsp.estatico;

public class EmpregadoTest {
	public static void main(String[] args) {

		Empregado e1 = new Empregado();
		System.out.println("ID: " + e1.getId());
		
		Empregado e2 = new Empregado();
		System.out.println("ID: " + e2.getId());
	}
}

//incrementar um novo id a cada novo empregado -> vá a Empregado.java
//por padrão java inicializa em 0, diferente de c que o lixo de memoria que tiver ele joga 