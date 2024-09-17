// n factorial을 계산하는 재귀함수를 작성해라.
// 단, 이 함수로부터 되돌아온 후 main에서 p가 가리키는 값을 출력하면 그게 n factorial 값이어야 한다.

#include <stdio.h>

void factorial(int n, int *p){
    if (n <= 2) return 1;
    else{
        return factorial(n-2, *p) + factorial(n-1, *p);
    }
}

int main(){

    int n, ans;
    printf("n번째 팩토리얼 값을 계산해보자. 자연수 n을 입력해주세요.\n");
    scanf("%d", &n);

    factorial(int n, &ans);

    printf("%d번째 팩토리얼 값은 %d다.\n", n, ans);

    return 0;
}