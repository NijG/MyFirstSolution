#include <stdio.h>

void Say_hello(); //prototyping , function declaration


int main()
{

	int x, y, z;
	x = 1, y = 2, z = 3;

	for (int i = 1; i < 100; i++)
	{
		Say_hello(i);
	}

	return 0;
}


void Say_hello(int i) // function definition
{
	printf("HI!%d\n",i);
	return;
}