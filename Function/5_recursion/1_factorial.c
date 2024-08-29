#include <stdio.h>

int factorial(int n){
    if (n == 1) // 재귀 함수에서 직접 문제를 해결할 수 있을 정도로 작아진 때, 이를 베이스 케이스(Base Case) 혹은 퇴행 케이스(Degenerate Case) 라고 한다.
        return 1;
    else
        return n * factorial(n - 1);
}

int main(){
    int num;
    printf("Enter a positive integer.\n");
    scanf("%d", &num);
    printf("Factorial of %d is %d.\n", num, factorial(num));
    return 0;
}

// 재귀 함수 호출 시, 스택이 계속 확장(Push)되었다가 계속 축소(Pop)된다는 것 정도만 알고 있자..
// 베이스 케이스에 도달하는 것만이 재귀 호출을 빠져나오는 유일한 방법이다...