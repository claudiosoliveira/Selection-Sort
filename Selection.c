#include<stdio.h>
#include<stdlib.h>
void ordena (int vetor[],int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
}
int main()
{
	int n,i;
	scanf("%i",&n);
	int vetor[n];
	for(i=0;i<n;i++)
	{
		scanf("%i",&vetor[i]);
	}
	printf("Antes:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	ordena(vetor,n);
	printf("Depois:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
	}
	return 0;
}
