/*
 * Wallpaper Changer
 * It changes the wallpaper in Windows.
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
 Keyboard.press(KEY_LEFT_CTRL);
 Keyboard.press(KEY_LEFT_SHIFT);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.press(KEY_LEFT_ALT);
 Keyboard.press('y');
 Keyboard.releaseAll();
 delay(1500);
 Keyboard.print("Set-ItemProperty -Path \"HKCU:\\Control Panel\\Desktop\" -Name Wallpaper -Value \"full_path_of_the_image_with_extension\"");
 delay(1300);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1200);
 Keyboard.print("exit");
 delay(1100);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 Keyboard.end();
}
void loop()
{
 //Nothing to do here ;)
}