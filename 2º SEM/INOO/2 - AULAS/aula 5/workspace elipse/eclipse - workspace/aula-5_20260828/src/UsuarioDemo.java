
public class UsuarioDemo {
	public static void main (String[] args) {
		Usuario user1 = new Usuario(
				"joao", "joao@aluno.ifsp.edu.br", true);
		
		System.out.println(user1.getUsername());
		System.out.println(user1.getEmail);
		System.out.println(user1.isAtivo);
		
		Usuario user2 = new Usuario("maria");
		
		System.out.println(user2.getUsername());
		System.out.println(user2.getEmail);
		System.out.println(user2.isAtivo);
		
	}
}
