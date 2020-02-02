/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Fahrenheit.cpp
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Fahrenheit.h"
#include <iostream>

using namespace std;

void Fahrenheit::printTemperature() const {
  cout << getTemperature() << " Fahrenheit" << endl;
}

double Fahrenheit::getTemperatureInCelsius() const {
  return ((getTemperature() - 32) * 5 / 9.0);
}

double Fahrenheit::getTemperatureInFahrenheit() const {
  return getTemperature();
}

double Fahrenheit::getTemperatureInKelvin() const {
  return ((getTemperature() - 32) * 5 / 9.0 + 273.15);
}