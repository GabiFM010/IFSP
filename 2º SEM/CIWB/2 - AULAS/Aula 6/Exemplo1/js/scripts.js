function principal() {
  let numero = 9.656;

  /* METODO toFixed */
  let mensagem = "Número com casas decimais:\n" 
    //+ numero.toFixed(0) + "\n" //arredondou pra 10 pq é > 0.5
    + numero.toFixed(2) + "\n"
    + numero.toFixed(4) + "\n"
    + numero.toFixed(6);
  console.log(mensagem);

  /*  METODO toPrecision */
  mensagem = "Numero com tamanho especifico:\n"
  //+ numero.toPrecision() + "\n" 
  + numero.toPrecision(2) + "\n" // numero de digitor exibidos, considerando o numero inteiro
  + numero.toPrecision(4) + "\n"
  + numero.toPrecision(6) + "\n";
  console.log(mensagem);

  /* METODO isNaN */
  mensagem = "isNaN:\n"
  + 'número 123: ' + isNaN(123) + "\n" //veridica se é numeral
  + 'string contendo 123: ' + isNaN('123') + "\n"
  + 'string texto' + isNaN('texto') + "\n";
  console.log(mensagem);

  /* Objeto Math */
  mensagem = "Métodos do objeto Math:\n"
  /* metodo round */
  + Math.round(5.5) + "\n" // numero de digitor exibidos, considerando o numero inteiro
  + Math.round(5.9) + "\n"
  + Math.round(5.2) + "\n"
  /* metodo trunc */
  + Math.trunc(5.5) + "\n"
  + Math.trunc(5.9) + "\n"
  + Math.trunc(5.2) + "\n"
  /* brincando com as casas decimais */
  + (Math.round(numero * 100))/100 + "\n"
  + (Math.trunc(numero * 100))/100 + "\n"
  + (Math.round(numero * 1000))/100 + "\n"
  + (Math.trunc(numero * 10000))/100 + "\n";
  console.log(mensagem);
}

principal();

/*

  isNaN = is Not a Number

  ver no console do google
*/