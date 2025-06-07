#include "Arduino.h"
#include "GenericDevBoardIndicatorLed.h"

GenericDevBoardIndicatorLed::GenericDevBoardIndicatorLed(int ledpin)
{
  led_pin = ledpin;
  pinMode(led_pin, OUTPUT);
}

// we don't really have any colors so just use the built in LED
void GenericDevBoardIndicatorLed::set_led_rgb(uint32_t color)
{
  if (color == 0)
  {
    digitalWrite(led_pin, LOW);
  }
  else
  {
    digitalWrite(led_pin, HIGH);
  }
}
