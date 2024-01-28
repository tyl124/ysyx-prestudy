#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L;
    /* unsigned 将数定义为无符号类型, 
     * 通常为32位，也可能为64位，取决于机器的具体实现 */

    printf("The entire universe has %ld bugs.\n",
            universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n",
            expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",
            part_of_universe);

    // this makes no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n",
            care_percentage);

    return 0;
}

/* 在C 语言中，char 与int相乘时，
 * char类型数据会被隐式地提升为int型，所以可以相乘 */
