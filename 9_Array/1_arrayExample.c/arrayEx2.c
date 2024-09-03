#define MAX 200
#include <stdio.h>

int main(){
    int i, num; int fib[MAX];

    printf("Enter a number N.\n");
    scanf("%d", &num);

    fib[0] = fib[1] = 1;
    for (i = 2; i <= num; i++)
        fib[i] = fib[i-2] + fib[i-1];
    printf("%dth fibonacci number is %d.\n", num, fib[i-1]); // 배열 인덱스는 0부터 시작하니까..
    return 0;
}