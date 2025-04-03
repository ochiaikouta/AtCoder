#include <stdio.h>

int main(void)
{
    char N[7];
    if (scanf("%6s", N) != 1) {
        return 1;
    }
    
    int c1 = 0, c2 = 0, c3 = 0;

    for (size_t i = 0; i < 7; i++) {
        switch (N[i]) {
            case '1': c1++; break;
            case '2': c2++; break;
            case '3': c3++; break;
        }
    }

    puts((c1 == 1 && c2 == 2 && c3 == 3) ? "Yes" : "No");
    return 0;
}
