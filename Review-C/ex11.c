#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

/*
    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }
*/		
		// 倒序执行
		int i = argc - 1;
		while(i >= 0){
			printf("arg %d: %s\n", i, argv[i]);
			i--;
		}

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

// 复制
// 要让复制不会失败，就在复制的时候判断一下
// states 大小与 argc-1 之间的关系呗
		int num_argc = argc - 1;
		while(num_argc >= 0){
			states[num_argc] = argv[num_argc];
			num_argc--;
		}


    int num_states = 4;
    i = 0;  // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
