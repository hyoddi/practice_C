// 피보나치 수열의 n번째 항을 구하는 프로그램.
// fib(n) = fib(n-1) + fib(n-2)
// 단, fib(2) = fib(1) = 1
#include <stdio.h>

int fib(int n){
    if (n < 3)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main(){
    int num;
    printf("Enter a number N.\n");
    scnaf("%d", &num);
    printf("%dth fibonacci number is %d.\n", num, fib(num));
    return 0;
}

// 알다시피, 수가 크면 클수로 호출 스택도 준내게 쌓이니...실행 시간이 기하급수적으로 커질 수 있다.
// 피보나치를 재귀 호출로 만들면 일반적으로 2^n에 정비례한다고..