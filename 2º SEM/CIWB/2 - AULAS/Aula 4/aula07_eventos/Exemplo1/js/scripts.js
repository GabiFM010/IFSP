function definirParagrafo() {
  let elemArea, elemPar;
  let texto;
  elemArea = document.getElementById("texto"); //referência para textarea
  elemPar = document.getElementById("paragrafo"); //referência para p
  texto = elemArea.value; //texto digitado na área de texto
  elemPar.innerHTML = texto; //atribuição do texto ao parágrafo
}
