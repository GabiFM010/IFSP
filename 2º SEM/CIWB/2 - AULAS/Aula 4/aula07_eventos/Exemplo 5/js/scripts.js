// vincular o evento window.onload a uma função de inicialização
window.onload = registrarFuncoes;

// função de inicialização: manipuladores de eventos
function registrarFuncoes(){
    let botao = document.getElementById("enviar");
    botao.onmouseout = definirParagrafo; // criar o vinculo com o botao e a função, chamar a função a ser executada, ela vai manipular a ação do botao que so acontecera quandoo botao fr acionado

   /* let textarea = documento.getElementById("texto");
    textarea.onblur = definirParagrafo; //mesmo efeito do botaõ so que sem chamar o botão, quando um elemeneto perde o foco (onfocus) ele vira um elemento onblur*/
}

function definirParagrafo() {
    let elemArea, elemPar;
    let texto;
    elemArea = document.getElementById("texto"); //referência para textarea
    elemPar = document.getElementById("paragrafo"); //referência para p
    texto = elemArea.value; //texto digitado na área de texto
    elemPar.innerHTML = texto; //atribuição do texto ao parágrafo
  }
  