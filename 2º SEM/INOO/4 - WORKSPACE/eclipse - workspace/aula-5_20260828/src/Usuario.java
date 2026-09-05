
public class Usuario
{
	private String username;
	private String email;
	private boolean ativo;
	
	public Usuario(String username, String email, boolean ativo)
	{ // construtor sobreacarregado
		this.username = username;
		this.email = email;
		this.ativo = ativo;
	}
	
	public Usuario(String username)
	{ // mais um construtor sobreacrregado
		this.username = username;
		this.email = username + "@aluno.ifsp.edu.br"; // concatenação = javascript
		this.ativo = true;
	}
	
	public String getUsername()
	{
		return username;
	}
	
	public String getEmail()
	{
		return email;
	}
	
	public void setEmail()
	{
		this.email = email;
	}
	
	public void setUsername()
	{
		this.username = username;
	}
	
	public boolean isAtivo()
	{ // bool usa is pq é diferente
		return ativo;
	}
}
