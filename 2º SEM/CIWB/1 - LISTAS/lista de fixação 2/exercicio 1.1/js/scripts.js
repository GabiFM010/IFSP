function quadrado(numero) {
    return numero * numero;
}

function principal() {
    let pedido = prompt("Informe um número:");
    let numero = parseFloat(pedido);

    alert("O quadrado do número informado é: " + calculo(numero));

}

principal();
