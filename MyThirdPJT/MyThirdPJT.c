#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include <complex.h>

int main()
{
	//round off error(ex1)
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);

	//round off error(ex1)
	float c;
	c = 0.0f;
	for (int i = 0; i < 101; i++)
	{
		c = c + 0.01f;
	}
	printf("%f\n", c);

	
	//overflow
	float d = FLT_MAX;

	d = d *100.0f;
	printf("%f\n", d);



	_Bool b1;
	b1 = 0; //false
	b1 = 1; //true

	bool b2, b3;
	b2 = true;
	b3 = false;


	printf("%d %d %d\n", b1, b2, b3);


	return 0;
}