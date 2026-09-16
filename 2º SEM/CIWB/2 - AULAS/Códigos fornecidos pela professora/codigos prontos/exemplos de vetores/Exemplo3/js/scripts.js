const TAM = 10;

function principal() {
  // declaração do array
  let numeros = [];
  inicializarArray(numeros);
  alert(imprimirArray(numeros));
}

function inicializarArray(numeros){
  for (let i = 0; i < TAM; i++) {
    // números aleatórios no intervalo [1, 100]
    numeros[i] = Math.floor(Math.random() * 100) + 1;
  }
}

function imprimirArray(numeros){
  let mensagem = "*** Números armazenados no vetor ***\n[ ";
  for (let i = 0; i < numeros.length; i++) {
    mensagem += numeros[i] + " ";
  }
  mensagem += "]";
  return mensagem;
}

principal();