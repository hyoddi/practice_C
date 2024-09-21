#include <stdio.h>

int main(){

    int rabbit[4], *p, *q, *t;

    p = rabbit;     // 이
    p = &rabbit[0]; // 둘은 같은 말이다.

    p = rabbit + 1; // 이
    p = &rabbit[1]; // 둘도 같은 말이다.

    q = &rabbit[3];
    t = q - p; // 이건 &rabbit[3] - &rabbit[1]이고, 2가 된다.
    // 두 포인터 사이에 있는 요소의 개수를 구하기 위한 계산이다.


    return 0;
}