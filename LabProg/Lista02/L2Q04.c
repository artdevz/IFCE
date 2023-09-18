//L2-Q4:

#include <stdio.h>

int main() {
    short int jose = 150, pedro = 110, year;
    while (pedro <= jose) {
        year++;
        pedro += 3;
        jose += 2;
    }
    printf("Pedro passará José em %hd Anos.", year);

    return 0;
}