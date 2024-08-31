#include <stdio.h>

void to_binary(int n){
    if (n == 0) // 베이스 케이스
        return;
    else{
        to_binary(n/2);
        printf("%d", (n % 2));
    }
}

int main(){
    int num;
    printf("Enter a positive integer.\n");
    scanf("%d", &num);
    to_binary(num);
    printf("\n");
    return 0;
}

// 위처럼 재귀 호출을 먼저하는 경우가 머리 재귀다.
// 일부터 먼저 하고 재귀 호출로 들어가는 것이 꼬리 재귀라면, 재귀호출을 먼저하고 돌아오면서 일을 하는 것이 머리 재귀.