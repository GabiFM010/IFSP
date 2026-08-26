// vincular o evento window.onload a uma função de inicialização
window.onload = registrarFuncoes;

// função de inicialização: manipuladores de eventos
function registrarFuncoes(){
    let botao = document.getElementById("enviar");
    botão.addEventListener("click", deifinirParagrafo);
    botao.addEventListener("click", exibirAlerta);
}

function exibirAlerta(){
    alert ("Olá, esta quase acabando a aula");
}

function definirParagrafo() {
    let elemArea, elemPar;
    let texto;
    elemArea = document.getElementById("texto"); //referência para textarea
    elemPar = document.getElementById("paragrafo"); //referência para p
    texto = elemArea.value; //texto digitado na área de texto
    elemPar.innerHTML = texto; //atribuição do texto ao parágrafo
  }
  