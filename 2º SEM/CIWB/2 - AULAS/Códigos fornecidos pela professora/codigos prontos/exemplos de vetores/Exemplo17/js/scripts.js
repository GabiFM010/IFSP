function principal() {
  const frutasVermelhas = ["Amora", "Framboesa", "Morango"];
  const frutasAmarelas = ["Laranja", "Manga", "Maracujá"];
  const frutasDisponiveis = frutasVermelhas.concat(frutasAmarelas);
  window.alert('Frutas disponíveis: ' + frutasDisponiveis);
}

principal();