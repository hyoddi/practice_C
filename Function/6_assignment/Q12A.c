// 입력된 자연수 n이 소수인지를 확인하는 프로그램을 작성하되 재귀 함수로 구현해봐라.
// 이 함수는 인자 n이 소수이면 1을, 그렇지 않으면 0을 돌려준다.
// 둘째 인자인 half는 n/2에 해당하는 정수다.

// 어떤 수가 소수인지 판단하려면 n/2 또는 sqrt(n)까지로만 나눠보면 된다.
// n이 half로 나누어떨어지면 소수가 아니고, 그렇지 않을 경우 half를 하나 줄여서 재귀 호출한다. 베이스 케이스는 half == 1이 될 것.

#include <stdio.h>

int is_prime(int n, int half){

    if (half == 1) return 1;

    else if (n % half == 0) return 0;

    else is_prime(n, half - 1);

}

int main(){
    int num;
    printf("Is it prime number?\n");
    scanf("%d", &num);

    if (is_prime(num, num / 2)) {
        printf("%d is a prime number.\n", num);
    }
    else printf("%d is not a prime number.\n", num);
}