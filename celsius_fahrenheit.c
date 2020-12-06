#include <stdio.h>
main ()
{
	double far, cel;
	int lower, upper, step;

	lower = -50;
	upper = 500;
	step = 10;

	cel = lower;
	printf("Celsius\t\tFahrenheit\n");

	while (cel <= upper){
		far = cel*1.8+32;
		printf("%5.0f\t\t%8.3f\n",cel,far);
		cel=cel+step;
	}
}
