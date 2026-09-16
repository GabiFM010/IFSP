function principal() {
  // declaração do array
  let numeros = [32, 27, 64, 18, 95, 14, 90, 70, 60, 37];
  alert(imprimirArray(numeros));
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

