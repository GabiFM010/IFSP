const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(vetor));
  let numero = Number(prompt("Digite um número para pesquisar no vetor:"));
  if (buscarElemento(vetor, numero) === true) {
    alert('Número ' + numero + ' encontrado!');
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

principal();