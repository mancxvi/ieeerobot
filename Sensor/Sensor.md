# Sensor

## Usage

* Calibrate and read general sensors with the Arduino.
* Assumes sensor is connected to Arduino analog pins.
.. *For now, assumes sensor is initialized with channel numbers (0-5  on the UNO, 0-15 MEGA)*

## Members

* threshold: `uint16_t`
.. Analog readings below this value are considered noise.
* val: `uint16_t`
.. Analog reading from sensor.
* pin: `uint8_t`
.. Analog pin on Arduino that sensor is mapped to.
* emitterPin: `uint8_t`
.. Digital pin on Arduino that turns emitter associated with sensor on/off. 

## Methods

* Sensor() *Constructor*
	.. Syntax
	... `Sensor()`
	... `Sensor(pin)`
	... `Sensor(pin, emitterPin)`
* attach()
	.. Syntax
	... `attach(pin)`
	... `attach(pin, emitterPin)`
* detach()
	.. Unlinks sensor from arduino pins.
	.. Syntax
	... `detach()`
* calibrate()
	.. Sensors threshold value is calculated to adjust for ambient noise.
	.. Syntax
	... `calibrate()`
* read()
	.. Uses `analogRead()` to get sensor values, returns `val` of type `uint16_t`.
	.. Syntax
	... `read()`
* getBit()
	.. If `val` read is above `threshold` returns 1, else 0 of type `uint8_t`.
	.. Syntax
	... `getBit()`
* getThreshold()
	.. Syntax
	... `getThreshold()`
* getVal()
	.. Syntax
	... `getVal()`