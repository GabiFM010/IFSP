const TAM = 10;

function principal() {
  // declaração do array
  let vetor = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(vetor));
  
  if (vetor.some(elemento => elemento > 50)) {
    alert("O vetor possui algum elemento maior que 50.");
  }
  else {
    alert("O vetor não possui elemento maior que 50.");
  }

  if (vetor.every(elemento => elemento > 50)) {
    alert("O vetor possui todos elementos maiores que 50.");
  }
  else {
    alert("O vetor não possui todos elementos maiores que 50.");
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



principal();