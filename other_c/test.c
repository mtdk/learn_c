#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//int ages[]={23,43,12,89,2};

	//char *name[]={"Alan","Frank","Mary","John"};

	int array[10]={0,1,2,3,4,5,6,7,8,9},value;

	value = *(array+9);

	printf("value = %d\n", value);

	//printf("sizeof(ages): %ld\n", sizeof(ages));

	//printf("sizeof(int): %ld\n", sizeof(int));

	//printf("*name sizeof %ld\n", sizeof(*name));

	//printf("*name strlen %ld\n", strlen(*name));

	return 0;
}
