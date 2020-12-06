#include <stdio.h>
main ()
{
	double far, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 30;

	far = lower;
	printf("Fahrenheit\tCelsius\n");

	while (far <= upper){
		cel = 5 * (far-32)/9;
		
		printf("%6.0f\t\t%8.3f\n",far,cel);
		far=far+step;
	}
}
