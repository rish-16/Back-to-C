#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

typedef struct {
	int x;
	int y;
} point2;

typedef struct {
	char * brand;
	char * licence_plate;
} vehicle;

int main() {
	struct point p;
	
	p.x = 10;
	p.y = 20;
	
	printf ("%s\n", p);
	
	point2 p2;
	
	vehicle V;
	V.brand = "Toyota";
	V.licence_plate = "SG1983";
}