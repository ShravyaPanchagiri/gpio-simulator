#include "gpio.h"

static PinState pins[NUM_PINS];

void gpio_init() {
	for(int i=0; i<NUM_PINS; i++)
		pins[i] = LOW;
}

void gpio_set_pin(int pin, PinState state) {
	if(pin >= 0  && pin <NUM_PINS)
		pins[pin] = state;
}

PinState gpio_get_pin(int pin) {
	if(pin >=0 && pin < NUM_PINS)
		return pins[pin];
	return LOW;
}

void gpio_toggle_pin(int pin) {
	if(pin >=0 && pin < NUM_PINS) 
		pins[pin] = !pins[pin];
}