function imprimirPares() {
    let mensagem = '';

    for (let i = 2; i <=20; i += 2){
        mensagem +=  i + '\n';
    }

    return mensagem;
}

function principal() {
    alert ('Numeros pares de 2 a 20: \n' + imprimirPares());

}

principal();

