#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    char S[105];
    scanf("%s", S+1); //←S+1にすることで、ポインタ演算を生かして番兵もすぐに使える！
    
    S[0] = 'X';
    S[N+1] = 'X';
    S[N+2] = '\0';

    int count = 0;
    int total = 0;
    int a, b;
    for (int i = 0; i < N+1; i++) { 
        if (S[i] == 'X' && S[i+1] == 'O' ) {
            a = i + 1;
        } else if (S[i] == 'O' && S[i+1] == 'X') {
            b = i;
            count = b - a + 1;
            total += count/K; 
        } 

    }
    printf("%i\n", total);
}