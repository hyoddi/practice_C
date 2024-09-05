#include <stdio.h>
int main(){
    int num, *p;

    p = &num;
    *p = 5;

    printf("&num = %p, num = %d.\n", &num, num); // %p는 포인터 형식지정자
    printf("p = %p, *p = %d, &p = %p\n", p, *p, &p);

    printf("sizeof(p) = %d.\n", sizeof(p));
    printf("sizeof(*p) = %d.\n", sizeof(*p));
    return 0;
}

/* 출력 예제

> &num = 0x7fffffffd0ac, num = 5.
> p = 0x7fffffffd0ac, *p = 5, &p = 0x7fffffffd0b0  -> 포인터 변수도 변수기 때문에 일정한 메모리 공간을 차지한다.

> sizeof(p) = 8.  -> 포인터 변수 자체는 8바이트(메모리에 따라 달라지겠죠?)
> sizeof(*p) = 4. -> 포인터가 가리키고 있는 건 4바이트 (int형인 num의 크기)

*/