window.onload = inicializar;

function inicializar(){
    let botao = document.getElementById('botao');
    botao.addEventListener('click', function () {
        let inputDate = document.getElementById('data');
        console.log(inputDate.value);
        console.log(typeof inputDate.value);

        let data1 = new Date(inputDate.value + 'T00:00:00');
        console.log(data1.toLocaleDateString());

        let data2 = new Date();
        data2.setHours(0, 0, 0, 0, 0); //zera horario

        let diferencaMs = Math.abs(data2 - data1); //quer que nunca de dias em quantidade negativa, por isso o abs (absolut)
        let msPorDia = 24 * 60 * 60 * 1000;
        let dias = Math.floor(diferencaMs / msPorDia);
        alert("Diferença em dias: " + dias);

    })
}