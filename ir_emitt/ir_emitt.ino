#include <IRremote.h>
IRsend irsend;

void setup()
{
 Serial.begin(9600);
}

void loop() 
{
  irsend.sendSony(0xa90, 12); // Sony TV power code
}
