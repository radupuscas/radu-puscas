#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h>

struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}


void push(struct Stack* stack, int item)
{
	if (stack->top == stack->capacity - 1)
		return;
	stack->array[++stack->top] = item;
	printf("%d adaugat in stiva\n", item);
}
int pop(struct Stack* stack)
{
	if (stack->top==-1)
		return INT_MIN;
	return stack->array[stack->top--];
}
int peek(struct Stack* stack)
{
	if (stack->top==-1)
		return INT_MIN;
	return stack->array[stack->top];
}
int palindrom(int el)
{
	int  i=0,el2;
	el2 = el;
	while (el2 != 0)
	{
		el2 = el2 / 10;
		i++;
	}
	el2 = 0;
	if (i % 2 == 0)
	{
		for (int j = 0; j < i / 2; j++)
		{
			el2 = el2 * 10 + el % 10;
			el = el / 10;
		}
		if (el == el2)
			return 1;
		else
			return 0;
	}
	if (i % 2 != 0)
	{
		for (int j = 0; j < i / 2; j++)
		{
			el2 = el2 * 10 + el % 10;
			el = el / 10;
		}
		el = el / 10;
		if (el == el2)
			return 1;
		else
			return 0;
	}
}
int main()
{
	struct Stack* stack = createStack(100);
	
	int n,i=0,el;
	printf("Introduceti numarul de elemente:");
	scanf("%d", &n);
	while (i < n)
	{
		printf("Adaugati element:");
		scanf("%d", &el);
		if (palindrom(el) == 1)
		{
			push(stack, el);
		}

		i++;
	}
	
	system("pause");
	return 0;
}

