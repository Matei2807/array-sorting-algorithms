#include <stdio.h>

static void sort(int v[10], int n)
{
	int i, j, aux;
	for(i = 0; i < n - 1; i++)
		for(j = 0; j < n - i - 1; j++)
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = v[j];
			}
	for(i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int main(void)
{
	int n = 10, v[100] = {1, 4, 2, 6, 9, 0, 3, 8, 10 ,11};
	sort(v, n);
	return 0;
}
