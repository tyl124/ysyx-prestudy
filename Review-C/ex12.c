#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1) {
        printf("You only have one argument. You suck.\n");
				// 实际上没有输入任何参数(如果把可执行程序名不当作任何输入参数)
				// 的情况下.
    } else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for(i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}


// && || ~
// 更多的测试用例，有一说一，有点沙比
/*
	while(expr){
		expr1
		expr2
		...
		if(?)
			brreak;
	}
*/


