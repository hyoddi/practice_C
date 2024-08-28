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

/* 근데 #define으로 매크로 상수로 선언하면 안되나?*/
// 매크로 상수로 선언하면 전처리기에 의해 처리되기 때문에 무조건 프로그램 전체에 적용
// 하지만 상수 변수는 사용 영역을 프로그래머 마음대로 조절할 수 있다.