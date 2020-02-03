#include <stdio.h>

void substring(int x, int y);
int main()
{ 
	//bit operator
	int a = 0xAF; //10101111
	int b = 0xB5; //10110101

	printf("a=%d , b=%d\n", a, b);
	printf("%x and int=%d\n", a & b, a & b);//10100101
	printf("%x and int=%d\n", a | b, a | b);//10111111
	printf("%x and int=%d\n", a ^ b, a ^ b);//00011010
	printf("%x and int=%d\n", ~a, ~a);//01010000
	printf("%x and int=%d\n", a << 2, a << 2);//10111100
	printf("%x and int=%d\n", b >> 3, b >> 3);//00010110
	

	int n;
	printf("input any numbers\n");
	scanf_s("%d", &n);

	int i = 0;
	int j = n;
	
	for (i; i < n; i++) //Row
	{
		//col
		substring(j, 1 + 2*i);
		j--;
	}

	for (i; i >= 0; i--)
	{
		substring(j, 1 + 2 * i);
		j++;
	}

	   	  
	return 0; 

}


void substring(int x, int y)
{
	int a = 0;
	int b = 0;

	while (a < x)
	{
		printf(" ");
		a++;
	}
	for (b; b < y; b++)
	{
		printf("*");
	}
	printf("\n");
}