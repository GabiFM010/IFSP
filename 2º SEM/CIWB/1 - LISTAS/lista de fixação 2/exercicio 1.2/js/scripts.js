let quadrado = function(numero) {
    return numero * numero;
}

function principal() {
    let pedido = prompt("Informe um número:");
    let numero = parseFloat(pedido);
    
    alert("O quadrado do número informado é: " + quadrado(numero));

}

principal();

/*
let soma = numero => n1 + n2;
otimizao cod
*/