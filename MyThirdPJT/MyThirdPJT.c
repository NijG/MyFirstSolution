#include <stdio.h>
int main()
{ 
	char chVar = 'G';
	int iVar = 10;
	char *cp = &chVar;
	*cp = 'K';
	printf("chVar : ���� = %c, �ּ� = %p\n" , chVar , &chVar);
	printf("cp:%p,*cp : ���� = %c, &cp = %p\n",cp, *cp, &cp);

	return 0; 

}
