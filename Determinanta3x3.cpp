#include<stdio.h>

float det2x2(float a1, float a2, float b1, float b2)
{
	return a1 * b2 - a2 * b1;
}

int main()
{
	int i;
	float a[10], det = 0;

	printf("  x0  x1  x2\n  x3  x4  x5\n  x6  x7  x8\n\n");

	printf("Unesi 9 brojeva: \n");
	for (i = 0; i < 9; i++)
	{
		scanf_s("%f", &a[i]);
	}
	
	det = a[0] * det2x2(a[4], a[5], a[7], a[8]) - a[1] * det2x2(a[3], a[5], a[6], a[8]) + a[2] * det2x2(a[3], a[4], a[6], a[7]);

	printf("Vrijednost determinante je: %.2f\n\n", det);
	return 0;
}