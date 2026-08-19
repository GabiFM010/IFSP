function calculaTempo(horas, minutos, segundos) {
    let total;
    total = horas*3600 + minutos*60 + segundos;
    return total;
 }

 let retorno = calculaTempo(2,1,8);   
 window.alert("Tempo em segundos = " + retorno);

 