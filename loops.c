#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;
	int len = sizeof (array) / sizeof (array[0]);
	
	// for loop
	for (int i = 0; i < len; i++) {
		printf ("%d\n", array[i]);
		sum += array[i];
	}
	
	printf ("%d\n", sum);
	
	// while loop
	int n = 0;
	
	while (n < 10) {
		printf ("%d\n", n);
		n += 1;

		if (n == 5) {break;}
	}
}