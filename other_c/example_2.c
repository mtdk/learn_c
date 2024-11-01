#include <stdio.h>
#include <time.h>

// 传递指针给函数

void getSeconds(unsigned long *par);

int main(int argc, char *argv[])
{
	unsigned long sec;

	getSeconds(&sec);

	printf("Number of seconds: %ld\n", sec);

	return 0;
}

void getSeconds(unsigned long *par)
{
	*par = time(NULL);

	return;
}
