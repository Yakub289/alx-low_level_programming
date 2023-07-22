#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int seconds = 0;

		while (seconds = 60)
		{
			printf("%02d", hours);
			printf(":");
			printf("%02d", seconds);
			printf("\n");
			seconds++;
		}
		hours++;
	}
}
