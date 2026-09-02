window.onload = chamarAlerta;

let botao = function(){
    botao.addEventListener("click", exibirAlerta);
}

/*function chamarAlerta(){
    let botao = document.getElementById("enviar");
    botao.addEventListener("click", exibirAlerta);
}*/

function exibirAlerta(){
    alert("Botão clicado");
}