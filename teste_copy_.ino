#include <Keyboard.h>

void setup() {
  delay(3000); // Espera 3 segundos para o sistema reconhecer o Leonardo
  
  Keyboard.begin();
  delay(1000); // Pequeno atraso extra antes de digitar

  // Digita o usuário
  Keyboard.print("admin");
  Keyboard.write('\t');   // TAB para mudar de campo

  // Digita a senha
  Keyboard.print("admin123");
  Keyboard.write('\n');   // ENTER para enviar

  Keyboard.end(); // Encerra o controle do teclado
}

void loop() {
  // Nada aqui — o código só roda uma vez no setup()
}
