function principal() {
  let numero = 9.656;
  let mensagem = "Número com casas decimais:\n" 
    + numero.toFixed(0) + "\n" //arredondou pra 10 pq é > 0.5
    + numero.toFixed(2) + "\n"
    + numero.toFixed(4) + "\n"
    + numero.toFixed(6);
  window.alert(mensagem);
}

principal();