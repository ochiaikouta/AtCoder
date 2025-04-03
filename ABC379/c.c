#include <stdio.h>
#include <stdbool.h>

long long int N, M, count = 0;
bool found = true;

bool move(long long int j, long long int *a, long long int *b)
{
    if (j < N-1 && *a > 1 ) {
        while (*a > 1){
            (*a)--;
            (*b)++;
            count++;
        }
        return true;
    }
    if (*a == 1 && *b == 0) {
        found = false;
        return false;
    }
    
    if (*a == 1 ){
        return true;
    }

    return false;

}

int main(void)
{
    scanf("%lld %lld", &N, &M);
    long long int X[M];
    long long int A[M];
    long long int B[N];
    for (long long int i = 0; i < M; i++){
        scanf("%lld ", &X[i]);
        X[i]--;
    }
    for (long long int i = 0; i < M; i++){
        scanf("%lld ", &A[i]);
    }

    for (long long int i = 0; i < N; i++) B[i] = 0;

    long long int ix = 0;
    for (long long int i = 0; i < N; i++){
        if (ix < M && i == X[ix])  {
            B[i] = A[ix];
            ix++;
        }
    }
    
    for (long long int i = 0; i < N-1; i++) {
        if (found) {
            move(i, &B[i], &B[i+1]);
        }
    }
    if (found){
        printf("%lli", count);
    } else {
        printf("-1\n");
    }

    return 0;




}