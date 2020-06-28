#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int chess[10][10] = {0};
	int count = 0;
	int x, y;
	while (1)
	{
		x = rand()%10;
		y = rand()%10;
		if (chess[x][y] == 1)
			continue;
		else
		{
			chess[x][y] = 1;
			count++;

			if (count == 10)
				break;
		}
	}
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
		{
			printf("%d\t", chess[i][j]);
		}
		putchar(10);
	}
	return 0;
}
