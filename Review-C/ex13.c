#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    for(i = 0, char letter = argv[1][i]; argv[1][i] != '\0'; i++) {
     //   char letter = argv[1][i];

        switch(letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if(i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;
	// 若将这个break移入if， 那么在 i <= 2 的情况下，均会掉入 default情况
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}

/* 将所有大写字母转换成小写字母 */	
		for(int i = 0; argv[1][i] != '\0'; i++){
				char letter = argv[1][i];

				if(letter >= 'A' && letter <= 'Z')
					letter += 32;
		}

		











