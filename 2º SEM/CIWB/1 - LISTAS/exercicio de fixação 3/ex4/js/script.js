window.onload = chamarAlerta;

function chamarAlerta(){
    let botao = document.getElementById("enviar");
    botao.addEventListener("click", () => alert('Botão clicado!'));
}
