#include <stdio.h>

void call_by_value(int p){ // 애초에 변수 p가 받는 것은 호출 함수의 원본 변수의 '복사본'
    p+=1;                  // 그래서 뭔 짓거리를 해도 다시 돌아가면 원본은 그대로다.
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
    call_by_reference(&num); // 참조 호출 (인자로 num의 메모리 주소를 넘겨준다.)
    return 0;
}

/* 출력 예제
Before call_by_values, num is 500.
After call_by_values, num is 500.
Before call_by_reference, num is 500.
After call_by_reference, num is 501.
*/


// 그냥 일반적인 포인터 사용 예시 아니냐? 할 수 있겠지만,
// 함수를 호출해서 메인 스택 프레임 위에 함수의 스택 프레임이 하나 더 쌓여있는 상황, (스택탑)
// 거기서 메인 스택 프레임의 변수를 건드리는 것이다. (일반적으로는 안되자너~ 근데 C는 된다.)