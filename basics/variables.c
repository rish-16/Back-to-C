#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int a = 1;
	int b = 2;
	
	int c = 3, d = 4;
	
	printf ("%d\n", a + b);
	printf ("%d\n", c + d);
	
	double e = 4.534;
	float f = 3.4;
	float sum;

	sum = e + f;
	printf ("%f\n", sum);
	
	int numbers[6];
	numbers[0] = 0;
	numbers[1] = 10;
	numbers[2] = 20;
	numbers[3] = 30;
	numbers[4] = 40;
	numbers[5] = 50;
	
	char vowels[2][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};
	
	int size = sizeof (vowels[0]) / sizeof (vowels[0][0]);
	printf ("Size of array: %d\n", size);
}