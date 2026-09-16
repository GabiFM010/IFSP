const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(vetor));
  let numero = Number(prompt("Digite um número para retornar elementos maiores que ele:"));
  let vetorMaiores = vetor.filter(elemento => elemento > numero);
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