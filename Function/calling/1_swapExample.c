#include <stdio.h>

void swap(int m, int n){
    int temp;
    printf("Before swap, m = %d and n = %d.\n", m ,n);
    temp = m;
    m = n;
    n = temp;
    printf("After swap, m = %d and n = %d.\n", m, n);
    return;
}

int main(){
    int a = 10, b = 20;
    printf("Before calling function, a %d and b = %d.\n", a, b);
    swap(a, b);
    printf("After calling function, a = %d and b = %d.\n", a, b);
    return 0;
}

// 물론 이런다고 a, b 변수 값이 서로 바뀌는 건 아니다. 여전히 값 호출이기 때문.
// swap의 스택 프레임이 사라지고 다시 main의 스택 프레임이 스택 탑에 위치하면 a,b 의 값은 swap 함수를 호출하기 때문에 이전의 값을 그대로 유지한다.
// 진또배기로 바꾸고 싶다면 포인터를 이용해야 한다.