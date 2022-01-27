#include <Arduino.h>
#include <IRremote.h>

#define RECEIVER_PIN 5
IRrecv receiver(RECEIVER_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  receiver.enableIRIn();
}

void loop() {
  if (receiver.decode(&results)){
    Serial.println(results.value, HEX);
    receiver.resume();
  }
}
