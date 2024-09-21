#include <stdio.h>

int main(){

    int *p;
    char *q;
    double *s;

    p = 400;
    q = 400;
    s = 400;

    printf("%d\n", p + 1);
    printf("%d\n", q + 1);
    printf("%d\n", s + 1);

}

/* 출력은 아래와 같다.*/
// 404
// 401
// 408
// 핵심은, 포인터는 가리키는 대상에 따라 연산의 단위가 달라진다는 것이다. 