#include <stdio.h>

void reverse(int n){
    if (n ==0)
        return;
    else{
        printf("%d", n % 10);
        reverse(n / 10);
    }
}

int main(){
    int num;
    printf("Enter a positive integer.\n");
    scanf("%d", &num);
    reverse(num);
    printf("\n");
    return 0;
}

// 마지막 명령문에서 재귀 호출을 하는 경우를 꼬리재귀라고 한다.