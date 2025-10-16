#include <Keyboard.h>

void setup() {
  delay(3000); 
  
  Keyboard.begin();
  delay(1000); 


  Keyboard.print("admin");
  Keyboard.write('\t');   

  // Digita a senha
  Keyboard.print("admin123");
  Keyboard.write('\n');   

  Keyboard.end(); 
}

void loop() {
  // Nada aqui — o código só roda uma vez no setup()
}
