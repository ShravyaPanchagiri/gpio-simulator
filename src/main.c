#include "gpio.h"
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
	int choice, pin;
	while(1) {
		printf("\n 1- Set Pin 2-Toggle Pin 3-Read Pin 4-Exit\n Choice:");
		scanf("%d",&choice);
		if(choice == 4)
			break;
		printf("Enter pin number (0-7):");
		scanf("%d",&pin);
		switch(choice)
		{
			case 1: gpio_set_pin(pin, HIGH);
				break;
			case 2: gpio_toggle_pin(pin);
				break;
			case 3: printf("Pin %d state: %d\n",pin,gpio_get_pin(pin));
				break;
			default:
				printf("Invalid choice!\n");
		}

		display_pins();

	}
	return 0;
}