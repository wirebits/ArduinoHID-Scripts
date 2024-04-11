/*
 * USB Key
 * It enters the PIN/Password rapidly to unlock PC/Laptop/Phone.
 * Author - WireBits
 */

#include<Keyboard.h>
void setup()
{
 Keyboard.begin();
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(3000);
 Keyboard.print("PIN/Password");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 Keyboard.end();
}
void loop()
{
 //Nothing to do here ;)
}
