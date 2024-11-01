#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 5;

	int* p;
	int** q;
	p = &a;
	q = &p;

	printf("a address: %p\n", &a);
	printf("p value: %p\n", p);
	printf("q value: %p\n", *q);
	printf("*q value: %p\n", *q);
	printf("**q value: %d\n", **q);

	return 0;
}
