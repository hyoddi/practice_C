#include <stdio.h>

void increment(int m){
    m++;
    printf("Inside function, m is %d.\n", m);
    return;
}

int main(){
    int a = 10;
    printf("Before calling function, a is %d.\n", a);
    increment(a);
    printf("After calling functionm, a is %d.\n", a);
    return 0;
}

// 함수 호출 시, 매개변수로 a 변수 자체가 전달되는 것이 아닌, 복사본이 넘어간다는 것에 유의하자.

// 변수 자체를 넘겨주는 걸 "참조 호출(Call by Reference)", 
// 사본을 넘겨주는 방식을 "값 호출(Call by Value)"이라 하고, C언어는 후자만 지원한다.