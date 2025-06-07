#pragma once

#include "IndicatorLed.h"

class GenericDevBoardIndicatorLed : public IndicatorLed
{
private:
  int led_pin;

protected:
  void set_led_rgb(uint32_t color);

public:
  GenericDevBoardIndicatorLed(int ledpin);
};
