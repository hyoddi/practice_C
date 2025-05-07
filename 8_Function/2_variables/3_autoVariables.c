#include <stdio.h>

void exampleFunction() {
    auto int x = 10; // 'auto'는 생략 가능
    int y = 20;      // 기본적으로 자동 변수로 선언됨

    printf("x: %d, y: %d\n", x, y);
}

int main() {
    exampleFunction();
    // printf("%d", x); // 오류: 'x'는 main 함수에서 접근 불가능
    return 0;
}
