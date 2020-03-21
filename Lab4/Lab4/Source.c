#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v[100];
	int *p;
	int n;
	printf("Introduceti numarul de valori:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	p = &v[0];
	printf("Valoarea si adresa initiala este %d,respectiv %d\n", *p, p);
	printf("Incrementarea valorii si adresei unui pointer este %d,respectiv %d\n", (*p)++, p++);
	printf("Decrementarea valorii si adresei unui pointer este %d,respectiv %d\n", (*p)--, p--);
	
	system("pause");
}