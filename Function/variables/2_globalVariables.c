#include <stdio.h>

int gross; // 전역 변수 (global variables)
int add(int a, int b){
    int total = a + b;
    gross = 3;
    return total;
}


int main(){
    int m = 1, n = 3;
    int num = add(m, n);
    gross += 1;
    printf("%d", num);
}

/* 전역변수는 되도록이면 피해라 */

// 전역변수는 프로그램이 끝날 때까지 존재하기 때문에 메모리 낭비가 심하다.
// 모든 함수가 공유하는 변수라 여러 사람이 나누어 코드를 짜면 더 복잡해질 수 있다.
// 걍 복잡해지니까 앵간하면 쓰지 마라