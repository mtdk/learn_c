#include <stdio.h>

// 指向指针的指针
int main(int argc, char *argv[])
{
	int v;
	int *pt1;
	int **pt2;

	v = 100;

	pt1 = &v;

	pt2 = &pt1;

	printf("var = %d\n", v);
	printf("Pt1 = %p\n", pt1);
	printf("*Pt1 = %d\n", *pt1);
	printf("Pt2 = %p\n", pt2);
	printf("**Pt2 = %d\n", **pt2);

	return 0;
}
