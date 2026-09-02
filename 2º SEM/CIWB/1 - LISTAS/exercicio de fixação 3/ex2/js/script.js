window.onload = chamarAlerta;

function chamarAlerta(){
    let botao = document.getElementById("enviar");
    botao.addEventListener("click", exibirAlerta);
}

function exibirAlerta(){
    alert("Botão clicado");
}