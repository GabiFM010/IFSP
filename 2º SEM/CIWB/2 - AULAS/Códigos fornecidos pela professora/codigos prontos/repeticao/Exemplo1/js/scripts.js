function imprimirPares() {
  let i = 2;
  let mensagem ='';

  while (i <= 20) {
    mensagem += i + "\n";
    i += 2; // i = i + 2;
  }
  return mensagem;
}

function principal(){
  alert('Números pares de 2 a 20:\n' + imprimirPares());
  
}

principal();