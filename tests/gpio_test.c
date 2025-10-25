#include "gpio.h"
#include <assert.h>
#include <stdio.h>

void display_pins()
{
	printf("GPIO Pins: ");
	for(int i=0;i<8;i++)
	{
		if(gpio_get_pin(i) == HIGH)
			printf("● ");
		else
			printf("○ ");
	}
	printf("\n");
}

int main()
{
	gpio_init();
	printf("Test 1: Set pin 0 HIGH\n");
	gpio_set_pin(0, HIGH);
	display_pins();
	assert(gpio_get_pin(0) == HIGH);

	printf("Test 2: Toggle pin 0 \n");
	gpio_toggle_pin(0);
	display_pins();
	assert(gpio_get_pin(0) == LOW);

	printf("Test 3: Set pin 3 HIGH \n");
	gpio_set_pin(3, HIGH);
	display_pins();
	assert(gpio_get_pin(3) == HIGH);

	printf("All GPIO tests passed\n");
	return 0;
}