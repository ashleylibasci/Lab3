/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab3/src/Lab3.ino"
void setup();
void loop();
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
pinMode(D7, OUTPUT);
pinMode(D6, OUTPUT);
pinMode(D5, OUTPUT);

}

void loop() {
analogWrite(D7, 0); //red
analogWrite(D6, 255);
analogWrite(D5, 255);
delay(1000);
analogWrite(D7, 255); //green
analogWrite(D6, 0);
analogWrite(D5, 255);
delay(1000);
analogWrite(D7, 255); //blue
analogWrite(D6, 255);
analogWrite(D5, 0);
delay(1000);
analogWrite(D7, 0); //orange
analogWrite(D6, 90);
analogWrite(D5, 255);
delay(1000);
analogWrite(D7, 0); //yellow
analogWrite(D6, 0);
analogWrite(D5, 255);
delay(1000);
analogWrite(D7, 95); //purple
analogWrite(D6, 223);
analogWrite(D5, 15);
delay(1000);
analogWrite(D7, 255); //cyan
analogWrite(D6, 155);
analogWrite(D5, 155);
delay(1000);
}