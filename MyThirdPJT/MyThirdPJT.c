#include <stdio.h>

void Say_hello(); //prototyping , function declaration


int main()
{

	for (int i = 1; i < 100; i++)
	{
		Say_hello();
	}

	return 0;
}


void Say_hello() // function definition
{
	printf("HI!\n");
	return;
}