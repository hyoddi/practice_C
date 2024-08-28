#include <stdio.h>

double totla_money(const int principal){ // 매개변수를 상수로 받았기에
    double total;
    const double rate = 0.03; // 이렇게 정해져 있어서 바뀔 수 없는 값 같은 걸 상수로 선언하면 좋다.

    total = principal(1 + rate);
    principal *= 10; // 상수 변수 값을 바꾸려 하면, 여기서 오류
    return total;
}

void main(){
    printf("헬루");
}