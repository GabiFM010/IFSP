/*Faça um programa em JavaScript que possui um vetor com as idades de cinco pessoas.
O programa deve exibir os valores de idade armazenados no vetor, informar a menor idade, a
maior idade e a média das idades*/

window.onload = principal;

function principal() {
    let idades = [12, 25, 66, 78, 4];
    let menorIdade = encontrarMenor;
    let maiorIdade = encontrarMaior(idades);
    let mediaIdades = calcularMedia;


}

function encontrarMenor(idades) {

}

function encontrarMaior(vetor, elemento) {
    let maior;
    let j = 0;

    for (let i = 0; i < vetor.length; i++){
        if (vetor[i] > elemento) {
            vetor[i] = maior;
        }
    }
    return maior;
}

function calcularMedia(idades, mediaIdades) {

}