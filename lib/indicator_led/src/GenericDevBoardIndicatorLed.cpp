#include "Arduino.h"
#include "GenericDevBoardIndicatorLed.h"

GenericDevBoardIndicatorLed::GenericDevBoardIndicatorLed(int ledpin): m_led_pin(led_pin)
{
  pinMode(m_led_pin, OUTPUT);
}

// we don't really have any colors so just use the built in LED
void GenericDevBoardIndicatorLed::set_led_rgb(uint32_t color)
{
  if (color == 0)
  {
    digitalWrite(m_led_pin, LOW);
  }
  else
  {
    digitalWrite(m_led_pin, HIGH);
  }
}
