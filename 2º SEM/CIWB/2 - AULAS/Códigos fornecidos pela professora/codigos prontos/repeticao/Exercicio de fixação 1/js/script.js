function calcularTabuada(){
    let numero = '';
    let multiplicacao = 1;
    let mensagem = '';

    numero = parseInt( prompt ( "Informe um numero: " ));

    for (let i = 1; i < 10; i++){
        mensagem += numero + ' x ' + i + ' = ' + (numero * i) + '\n';
    }

    return mensagem;
}

function principal(){
    alert ('A tabuada é: ' + calcularTabuada());
}

principal();