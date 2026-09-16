function principal() {
  const frutas = ["Banana", "Laranja", "Maça", "Manga"];
  let fruta = prompt("Qual fruta deseja buscar?");
  if (frutas.includes(fruta)) {
    alert("Fruta " + fruta + " encontrada!");
  }
  else {
    alert("Fruta " + fruta + " não encontrada!");
  }
}

principal();

