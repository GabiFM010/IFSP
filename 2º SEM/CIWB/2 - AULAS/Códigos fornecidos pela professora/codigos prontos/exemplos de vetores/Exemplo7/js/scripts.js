const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(vetor));
  let numero = Number(prompt("Digite um número para retornar elementos maiores que ele:"));
  let vetorMaiores = buscarMaiores(vetor, numero);
  alert(imprimirArray(vetorMaiores));
}

function imprimirArray(vetor) {
  let mensagem = "*** valores armazenados no vetor ***\n[ ";
  for (let i = 0; i < vetor.length; i++) {
    mensagem += vetor[i] + " ";
  }
  mensagem += "]";
  return mensagem;
}

function buscarElemento(vetor, elemento) {
  let i = 0;
  while (i < vetor.length) {
    if (vetor[i] === elemento) {
      return true;
    }
    i++;
  }
  return false;
}

function buscarPosicao(vetor, elemento) {
  let i = 0;
  while (i < vetor.length) {
    if (vetor[i] === elemento) {
      return i;
    }
    i++;
  }
  return -1;
}

function buscarMaiores(vetor, elemento) {
  let maiores = [];
  let j = 0;
  for (let i = 0; i < vetor.length; i++) {
    if (vetor[i] > elemento) {
       maiores[j++] = vetor[i];
    }   
  }
 return maiores;
}

principal();