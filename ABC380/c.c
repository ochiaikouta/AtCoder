#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    long long int N, K;
    char S[500005]; //←こいつの範囲を見間違えていたせいで一生REになっていた元凶。しばくぞ！
    scanf("%lld %lld", &N, &K);
    scanf("%s", S);
    
    for (long long int i = N-1; i >= 0; i--) {
        S[i + 1] = S[i];
    }
    S[0] = '0';
    S[N+1] = '0';
    S[N+2] = '\0'; 

    long long int count = 0, start = 0, end = 0, end2 = 0;
    char b = '0', a = '0';
    bool touch = false;

    for (long long int i = 0; i < N+2; i++) {
        b = S[i];
        a = S[i+1];
        if((b == '0') && (a == '1')){
            touch = true;
            if (count == K - 1){
                start = i + 1;
            }
        } else if ((b == '1') && (a == '0') && touch){
            touch = false;
            
            if (count == K - 1) {
                end = i;
            }
            if (count == K - 2) {
                end2 = i;
            }
            count++;
        } 
    }
    
    for (long long int i = 1; i < N+1; i++) {
        if ((i < start) || (end < i) ){
            printf("%c", S[i]);
        }
        if (i == end2) {
            for (long long int j = 0; j < end - start + 1 ; j++) {
                printf("%c", '1');
            }
        }
    }
    printf("\n");

    return 0;
}

/*
たまたま境界条件の処理を全部一括に行えるように考えてたら、周期的境界条件みたいなやつが思いついた。
ダミーを前後に追加するやつを番兵（Sentinel）テクニックと言うらしい。
*/