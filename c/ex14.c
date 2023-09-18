#include <stdio.h>
#include <ctype.h>

// forward declarations 提前声明
// can_print_if()函数其实是可以不需要的
//int can_print_it(char cha);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;

	for(i = 0; arg[i] != '\0'; i++){
		char ch = arg[i];

		if(isalpha(ch) || isblank(ch)){
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}
/*
int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}
*/
int main(int argc, char *argv[])
{
	print_arguments(argc,argv);
	return 0;
}
