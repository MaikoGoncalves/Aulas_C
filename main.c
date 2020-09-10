#include <stdio.h>
#include <math.h>

// (x2 + x *y + Z-Y)2 > (x+ x)*(y + Z-Y)2 X=3 Y=7 Z=10

int main(void)
{
	int x, y, z;
	double soma1, soma2;

	x = 3;
	y = 7;
	z = 10;

	soma1 =  pow(((x*2) + x * y + z - y), 2);
	soma2 =  ((x + x)*pow((y + z - y), 2));

	printf("Soma1 = %lf\nSoma2 = %lf\n", soma1, soma2);
	//printf("Soma1", soma1);

	if (soma1 > soma2)
		printf("Verdadeiro\n");
	else
		printf("Falso\n");

	return 0;
}

