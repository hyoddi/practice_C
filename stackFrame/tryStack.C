#include <stdio.h>

void myfunc(int a, int b){
    // 여기서 %p는 포인터의 주소를 출력한다.
    printf("Inside try, a at %p, b at %p.\n", &a, &b);
    printf("Inside try, a = %d, b = %d.\n", a, b);
    a++;
    b++;
    printf("Upon increasing, a = %d, b = %d.\n\n", a, b);
    return;
}

int main(){
    int one = 1, two = 2;
    printf("In main, one at %p, two at %p.\n", &one, &two);
    printf("In main, one = %d, two = %d.\n\n", one, two);

    myfunc(one, two);

    printf("Back to main, one at %p, two at %p.\n", &one, &two);
    printf("Back to main, one = %d, two = %d.\n", one, two);
    return 0;
}

/* 핵심은 main 함수에서의 변수 주소와 myfunc 함수에서의 변수 주소가 다르다는 것이다.
   "변수 자체가 아니라 변수의 값만 복사해서 넘겨받는다"

   - 그래서 우린 피호출 함수의 매개변수를 '값 매개변수(Value Parameters)' 라고 부른다.
*/