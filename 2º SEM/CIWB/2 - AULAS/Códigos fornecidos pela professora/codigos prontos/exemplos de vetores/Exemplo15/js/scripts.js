function principal() {
  const frutas = ["Banana", "Laranja", "Maça", "Manga"];
  let frutaRemovida = frutas.shift();
  window.alert('Fruta removida: ' + frutaRemovida + '\nFrutas disponíveis: ' + frutas);
}

principal();