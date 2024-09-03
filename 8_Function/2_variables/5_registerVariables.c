#define MAX 3
#include <stdio.h>

void add(){
    int i, j;
    register int count = 0;

    for (i = 0; i < MAX; i ++)
        for (j = 0; j < MAX; j++)
            count++;
}

int main(){

    add();
    return 0;
}

// 레지스터 변수는 변수를 CPU 레지스터에 저장하라는 요구다.
// 메인 메모리보다 훨씬 빠르게 읽을 수 있기 때문에, 자주 사용하는 변수는 레지스터 변수로 사용해보자.

// 요즘 나온 대부분의 컴파일러는 자동으로 최적화를 해 알잘딱으로 레지스터에 변수를 할당하기도 한다고 한다.
// 쨌거나 쓰면 좋다.