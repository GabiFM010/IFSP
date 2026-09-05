
public class FormatadorHora {
	public String formatar (int hora, int minuto, int segundos) {
		return String.format("%2d:%02d:%2d", hora, minuto, segundos);
	}
	
	public String formatar(int segundos) {
		int hora = segundos / 3600;
		segundos = segundos % 3600; // dividindo o resto
		int minuto = segundos / 60;
		segundos = segundos % 60;
		
		return formatar(hora, minuto, segundos);
	}
}
