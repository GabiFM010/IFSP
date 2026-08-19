function calcularMediaIdade(){
    let soma = 0;
    let contador = 0;

    do{
        soma += parseInt(prompt('Digite uma idade: '));
        contador++;
    } while(confirm ("informar outra idade?"));
    
    return soma / contador;
}

function principal(){
    alert ('Media das idades = ' + calcularMediaIdade().toFixed(''));
}

principal();