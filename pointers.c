#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 3;
	
	int * a_ptr = &a;
	
	printf ("%d\n", a);
	printf ("%d\n", *a_ptr);
	
	*a_ptr += 1;
	
	printf ("%d\n", a);
	printf ("%d\n", *a_ptr);
	
	if (*a_ptr == a) {
		printf ("Yes\n");
	} else {
		printf ("No\n");
	}
}