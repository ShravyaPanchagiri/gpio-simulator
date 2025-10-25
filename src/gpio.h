#ifndef GPIO_H
#define GPIO_H

#define NUM_PINS 8

typedef enum { LOW = 0, HIGH = 1} Pinstate;

void gpio_init();
void gpio_set_pin(int pin, PinState state);
PinState gpio_get_pin(int pin);
void gpio_toggle_pin(int pin);


#endif