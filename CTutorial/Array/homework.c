#include <stdio.h>

#define M 5
#define N 3

int main (void) {
	int a[M] = {1, 3, 5, 6, 9};
	int b[N] = {2, 4, 7};
	int c[M+N];

	int i=0, j=0, h=0;
	while (i<M && j<N){
		if (a[i] <= b[j])
			c[h++] = a[i++];
		else
			c[h++] = b[j++];
	}

	while (i<M)
		c[h++] = a[i++];
	while (j<N)
		c[h++] = b[j++];

	for (int x=0; x<M+N; x++)
		printf("c[%d]=%d\n", x, c[x]);

	return 0;
}
