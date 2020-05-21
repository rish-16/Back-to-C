#include <stdio.h>
#include <stdlib.h>

int func(int num) {
	static int s = 0; // only declared once
	s += num;
	return s;
}

int main() {
	printf ("%d\n", func(12));
	printf ("%d\n", func(12));
	printf ("%d\n", func(12));
	printf ("%d\n", func(12));
}