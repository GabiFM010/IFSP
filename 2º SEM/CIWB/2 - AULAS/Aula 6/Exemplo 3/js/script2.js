window.onload = inicializar;

function inicializar(){
    let botao = document.getElementById('botao');
    botao.addEventListener('click', function () {
        let inputDate = document.getElementById('data');
        console.log(inputDate.value);
        console.log(typeof inputDate.value);

        let dataObj = new Date(inputDate.value + 'T00:00:00');
        console.log(dataObj);
    })
}