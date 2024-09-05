#include <stdio.h>

int main(){

    int num; // 정수 변수
    int *p;  // 포인터 변수
    p = &num;// 포인터 변수 'p'에 num의 주소를 대입하겠다. (&num은 num의 주소를 의미한다)
    *p = 5;  // 여기서 *p는 p가 가리키는 것, 즉 p가 가지고 있는 num의 주소에 가서 5를 대입하겠다, num 변수에 숫자 5가 대입된다.\

    return 0;
}

// 위처럼 포인터를 따라가서 변수에 접근 하는 행위를
// "참조",(Dereferencing, Indirection)이라고 한다.