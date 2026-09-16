const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(vetor));
  let numero = Number(prompt("Digite um número para pesquisar no vetor:"));
  let posicao = buscarPosicao(vetor, numero);
  if (posicao !== -1) {
    alert('Número ' + numero + ' encontrado na posição ' + posicao);
  }
  else {
    alert('Número ' + numero + ' não encontrado!');
  }
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

principal();