/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Fahrenheit.h
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Temperature.h"

#ifndef FAHRENHEIT_h
#define FAHRENHEIT_h

class Fahrenheit : public Temperature {
public:
  Fahrenheit(double temperature) : Temperature(temperature){};

  void printTemperature() const;

  // Conversions
  double getTemperatureInCelsius() const;
  double getTemperatureInFahrenheit() const;
  double getTemperatureInKelvin() const;
};

#endif // KELVIN_H