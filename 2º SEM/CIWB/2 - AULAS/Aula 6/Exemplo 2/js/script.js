/* gerar numero */
function principal(){
    let numeroGerado, min, max;
    min = parseInt(prompt('Valor minimo '));
    max = parseInt(prompt('Valor maximo '));
    numeroGerado = gerarNumero(x,y);
    alert('Numero gerado = ' + numeroGerado);
  }

  function gerarNumero(x, y){
    return Math.floor(Math.random()*( y + 1 - x)) + x;
}

principal();