//L2-Q26:

#include <stdio.h>
#define MAXLEN 9

int main() {
    for (int i = 1; i <= 256; i++) {
        int num = i, count = 0;
        int bin[MAXLEN] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        while (1) {
            if (num == 0) {
                bin[count] = 0;
                break;
            }
            if (num == 1) {
                bin[count] = 1;
                break;
            }
            bin[count] = num % 2;
            num = num / 2;
            count++;
        }
        for (int j = 8; j >= 0; j--) {
            printf("%d", bin[j]);
        }
        printf(" = %d = %o = %X\n", i, i, i);
    }
    
    return 0;
}