// 아래 프로그램의 출력을 예상해보라. 또, main의 printf문이 n*10을 출력하도록 main 함수와 ten_times 함수를 수정하라.

#include <stdio.h>
int ten_times(int n){
    n*=10;
    return n;
}

int main(){
    int n = 5;
    int ans = ten_times(n);
    printf("%d\n", ans);
    return 0;
}

// 함수 호출은 했으나 return 값을 주지 않았기에 출력은 5라 나온다.
// 위처럼 바꾸면 된다.