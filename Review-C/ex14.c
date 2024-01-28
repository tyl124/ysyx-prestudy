#include <stdio.h>
#include <ctype.h>
#include <string.h>		// 增加头文件

#define LEN 20

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
		int len = strlen(argv[i]);

    for(i = 0; i < argc; i++) {
        print_letters(*(argv + i), len);
    }

}

void print_letters(char arg[], int len)
{
    int i = 0;
	
	/* 只有长度等于LEN才可以打印 */
		if(len == LEN){
				for(i = 0; arg[i] != '\0'; i++) {
						char ch = *(arg + i);
						if(isalpha(ch) || isblank(ch)) {
								printf("'%c' == %d ", ch, ch);
						}
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
    print_arguments(argc, argv);
    return 0;
}
