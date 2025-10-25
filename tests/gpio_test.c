#include "gpio.h"
#include <assert.h>
#include <stdio.h>

int main()
{
	gpio_init();
	gpio_set_pin(0, HIGH);
	assert(gpio_get_pin(0) == HIGH);
	gpio_toggle_pin(0);
	assert(gpio_get_pin(0) == LOW);
	printf("All GPIO tests passed\n");
	return 0;
}