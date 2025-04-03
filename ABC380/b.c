#include <stdio.h>
int main(void)
{
    char S[101] = {0};
    if (scanf("%s", S) != 1){
        return 1;
    }
    int A[101];
    int buff = 0;
    int index = 0;
    for (int i = 1; S[i] != '\0'; i++) {
        switch (S[i])
        {
        case '-': 
            buff++;
            break;
        case '|': 
            A[index] = buff;
            index++;
            buff = 0; 
            break;
        }
    }
    for (int i = 0; i < index; i++){
        printf("%i ", A[i]);
    }
}