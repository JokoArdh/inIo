#ifndef INIO_h
#define INIO_h

#include "Arduino.h"

void setupPin(byte numberPin, boolean statusMode)
{
    pinMode(numberPin, statusMode);
}
void outputOn(byte numberPin, boolean statusPin)
{
    digitalWrite(numberPin, statusPin);
}
void blank(byte numberPin, int delayBlink)
{
    digitalWrite(numberPin, HIGH);
    delay(delayBlink);
    digitalWrite(numberPin, LOW);
    delay(delayBlink);
}

#endif
