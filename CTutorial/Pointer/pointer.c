#include <stdio.h>

int main(void)
{
	char *pc; short *ps; int *pi; float *pf; double *pd;
	
	printf("sizeof(pc)=%ld\n", sizeof(pc));
	printf("sizeof(ps)=%ld\n", sizeof(ps));
	printf("sizeof(pi)=%ld\n", sizeof(pi));
	printf("sizeof(pf)=%ld\n", sizeof(pf));
	printf("sizeof(pd)=%ld\n", sizeof(pd));
	return 0;
}
