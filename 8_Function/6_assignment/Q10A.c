// 양의 정수 a,b를 입력받아 a의 b제곱을 출력하는 프로그램을 작성하되, 재귀함수로 구현해보라.
#include <stdio.h>

int power(int a, int b){
    if (b == 1) return a * b;
    else return a * power(a, b - 1);

}

int main(){
    int n1, n2, ans;
    printf("Enter base and multiplier.\n");
    scanf("%d %d", &n1, &n2);
    ans = power(n1, n2);
    printf("%d to the power of %d is %d", n1, n2, ans);
}


/* 출력 예제
> Enter base and multiplier.
> 2 5
> 2 to the power of 5 is 32.
*/