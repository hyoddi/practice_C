// C언어는 배열을 전달할 때 배열의 시작 주소만 전달한다.

#define MAX 4
#include <stdio.h>

void increment(const int rb[]){ // 원본 배열을 읽기만 할 땐 const 지정자를 붙이는 것이 좋다.
    int i;
    for (i = 0; i < MAX; i++)
        rb[i]++;
}

int main(){
    int i, rabbit[MAX] = {10, 20, 30, 40};
    increment(rabbit);
    for (i = 0; i < MAX; i++)
        printf("%d", rabbit[i]);
    printf("\n");
    return 0;
}

// 배열 요소를 일일이 복사하는 것보단, 원본 배열의 시작 주소만 복사해 전달하는 것이 상당히 효율적인 셈.