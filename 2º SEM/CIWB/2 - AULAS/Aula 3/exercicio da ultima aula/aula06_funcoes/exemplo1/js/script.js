const calculaTempo = function(horas = 0, minutos = 0, segundos = 0) { //expressão de função

    let total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}

function principal (f){
    let horas = parseFloat(prompt("Horas:"));
    let minutos = parseInt(prompt("Minutos:"));
    let segundos = parseInt(prompt("Segundos"));

    let retorno = f (horas,minutos,segundos);   
    window.alert("Tempo em segundos = " + retorno);
}

principal();
 

/*
================================= 1 ========================================

function calculaTempo(horas = 0, minutos = 0, segundos = 0) { agoar tem valores padrão então o if identico a undefined não é necessario

//if (horas === undefined){
       // horas = 0;
    //}
    //if (minutos === undefined){
      //  minutos = 0;
    //}
    //if (segundos === undefined){
    //  segundos = 0;
    //}

    let total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}
    
function principal (){
    let horas = parseFloat(prompt("Horas:"));
    let minutos = parseInt(prompt("Minutos:"));
    let segundos = parseInt(prompt("Segundos"));
   
    let retorno = calculaTempo(horas,minutos,segundos);   
    window.alert("Tempo em segundos = " + retorno);
}
    
principal();
     
============================= 2 ================================================

const calculaTempo = function(horas = 0, minutos = 0, segundos = 0) { //expressão de função

    let total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}

function principal (){
    let horas = parseFloat(prompt("Horas:"));
    let minutos = parseInt(prompt("Minutos:"));
    let segundos = parseInt(prompt("Segundos"));

    let retorno = calculaTempo(horas,minutos,segundos);   
    window.alert("Tempo em segundos = " + retorno);
}

principal();
 
     
*/