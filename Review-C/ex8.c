#include <stdio.h>

int main(int argc, char *argv[])
{
	// add my modified content here
    int areas[] = {10, 12, 13, 14, 20};
		// 下面这行代码不会报错, 但这属于一种未定义的行为
		areas[100] = 100;
		areas[4] = 101;
		// 这行代码会打印出一个奇怪的数值
		printf("%d\n", areas[10]);
    char name[] = "Zed";
		name[0] = 'A';
		// 当从full_name删除'\0'时, valgrind不会提示任何错误
    char full_name[] = {
        'Z', 'e', 'd',
         ' ', 'A', '.', ' ',
         'S', 'h', 'a', 'w' 
    };
		full_name[0] = '*';

    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n",
            sizeof(areas));
    printf("The number of ints in areas: %ld\n",
            sizeof(areas) / sizeof(int));
		printf("The first area is %d, the 2nd %d.\n",
            areas[0], areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",
            sizeof(name));
    printf("The number of chars: %ld\n",
            sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n",
            sizeof(full_name));
    printf("The number of chars: %ld\n",
            sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);

    return 0;
}
