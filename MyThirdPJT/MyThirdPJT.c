#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void* malloc(size_t size);
void free(void* ptr);
void* realloc(void* ptr, size_t size);

void Say_hello(); //prototyping , function declaration


int main()
{

	int x, y, z;
	x = 1, y = 2, z = 3;

	int ccc;
	scanf("%d", &ccc);




	printf("\n\n\n\n\%d", ccc);





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