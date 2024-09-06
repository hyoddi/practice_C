#include <stdio.h>

void call_by_value(int p){
    p+=1;
}

void call_by_reference(int *p){
    *p+=1;
}

int main(){
    int num;

    num = 500;
    printf("Before call_by_value, num is %d.\n", num);
    call_by_value(num); // 값 호출
    printf("After call_by_value, num is %d.\n", num);

    num = 500;
    printf("Befor call_by_reference, num is %d.\n", num);
    call_by_reference(&num); // 참조 호출
    return 0;
}

/* 출력 예제
Before call_by_values, num is 500.
After call_by_values, num is 500.
Before call_by_reference, num is 500.
After call_by_reference, num is 501.
*/