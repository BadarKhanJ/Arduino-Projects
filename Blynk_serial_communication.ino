#define BLYNK_PRINT DebugSerial

// You could use a spare Hardware Serial on boards that have it (like Mega)
#include <SoftwareSerial.h>
SoftwareSerial DebugSerial(2, 3); // RX, TX
#include <BlynkSimpleStream.h>

char auth[] = "fAbEKhPi9TV7HksiWFEJ2nqMZTzw-F0n";
void setup(){
  // Debug console
  DebugSerial.begin(9600);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
  Blynk.run();
}
