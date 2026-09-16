const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [];
  inicializarArray(vetor);
  alert(imprimirArray(vetor));
}

function inicializarArray(vetor){
  for (let i = 0; i < TAM; i++) {
    let valor = prompt("Digite um valor para inserir no vetor:");
    if (isNaN(valor)) {
      vetor[i] = valor;
    }
    else {
      vetor[i] = Number(valor);
    }      
  }
}

function imprimirArray(vetor){
  let mensagem = "*** valores armazenados no vetor ***\n[ ";
  for (let i = 0; i < vetor.length; i++) {
    mensagem += vetor[i] + " ";
  }
  mensagem += "]";
  return mensagem;
}

principal();