
#ifndef THERMISTOR_H
#define THERMISTOR_H

#if defined(ARDUINO) && (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class Thermistor {

	public:
  
		/**
			Destructor
			Deletes Thermistor instance.
		*/
		virtual ~Thermistor() {};

		/**
			Reads a temperature in Celsius from the thermistor.

			@return temperature in degree Celsius
		*/
		virtual double readCelsius() = 0;

		/**
			Reads a temperature in Kelvin from the thermistor.

			@return temperature in degree Kelvin
		*/
		virtual double readKelvin() = 0;

		/**
			Reads a temperature in Fahrenheit from the thermistor.

			@return temperature in degree Fahrenheit
		*/
		virtual double readFahrenheit() = 0;
};

#endif
