// n factorial을 계산하는 재귀함수를 작성해라.
// 단, 이 함수로부터 되돌아온 후 main에서 p가 가리키는 값을 출력하면 그게 n factorial 값이어야 한다.

#include <stdio.h>

void factorial(int n, int *p){
    if (n == 1) return;
    else {
        *p *= n;
        factorial(n-1, p);    
    }
}

int main(){

    int n, ans = 1;
    int *ptr = &ans;
    printf("n!을 계산해보자.\n");
    scanf("%d", &n);

    factorial(n, ptr);

    printf("%d! = %d다.\n", n, ans);

    return 0;
}