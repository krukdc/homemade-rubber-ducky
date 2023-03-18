#include <Keyboard.h>

void setup() {
  // Oczekiwanie 500ms na połączenie z komputerem
  delay(500);
  
  // Symulacja wprowadzenia kombinacji klawiszy Windows+R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  
  // Wprowadzenie tekstu "notepad" i zatwierdzenie enterem
  Keyboard.print("notepad");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void loop() {
  // Pusty loop
}