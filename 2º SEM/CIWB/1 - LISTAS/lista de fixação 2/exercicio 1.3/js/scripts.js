let quadrado = (numero) => numero * numero;  // serve pra reduzir funções :: arrow(flechas) function, ex quadrado -> numero (que chama isso) -> num * num (que executa isso)

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