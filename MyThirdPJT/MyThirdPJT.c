#include <stdio.h>
int main()
{ 
	char chVar = 'G';
	int iVar = 10;
	char *cp = &chVar;
	*cp = 'K';
	printf("chVar : 내용 = %c, 주소 = %p\n" , chVar , &chVar);
	printf("cp:%p,*cp : 내용 = %c, &cp = %p\n",cp, *cp, &cp);

	return 0; 

}
