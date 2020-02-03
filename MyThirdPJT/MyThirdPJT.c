#include <stdio.h>
int main()
{ 
	//bit operator
	int a = 0xAF; //10101111
	int b = 0xB5; //10110101

	printf("a=%d , b=%d\n", a, b);
	printf("%x and int=%d\n", a & b, a & b); 1//10100101
	printf("%x and int=%d\n", a | b, a | b);//10111111
	printf("%x and int=%d\n", a ^ b, a ^ b);//00011010
	printf("%x and int=%d\n", ~a, ~a);//01010000
	printf("%x and int=%d\n", a << 2, a << 2);//10111100
	printf("%x and int=%d\n", b >> 3, b >> 3);//00010110


	return 0; 

}
