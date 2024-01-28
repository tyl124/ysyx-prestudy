#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
		// argc的个数为n, 其中第一个为可执行程序的名字, 其余是跟的参数
		// 所以当i从0开始时，第一个打印的字符串就是程序名字

    /*
		for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
		*/

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        NULL, "Texas"
    };
		// NULL就是表示该字符串为空, 打印效果为(null)
    int num_states = 4;

// 可以进行，这样打印出来就改变默认argv中的参数
		argv[0] = states[0];

    for(i = 0; i < argc; i++) 
        printf("arg %d: %s\n", i, argv[i]);

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
