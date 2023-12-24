#include <stdlib.h>
#include <time.h>
/**
 * main - assign random numbers and tell maybe it is positive or negative
 * Return: 0 on succes
 * By: Sina Mathew
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	return (0);
}
