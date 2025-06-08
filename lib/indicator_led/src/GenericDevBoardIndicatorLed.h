#pragma once

#include "IndicatorLed.h"

class GenericDevBoardIndicatorLed : public IndicatorLed
{
private:
  int m_led_pin;

protected:
  void set_led_rgb(uint32_t color);

public:
  GenericDevBoardIndicatorLed(int led_pin);
};
