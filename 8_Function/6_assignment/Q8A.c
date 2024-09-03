// 자연수 n을 입력받은 후 재귀 호출에 의해 화면에 n개의 asterisk(*)를 출력하는 프로그램을 작성하라.

#include <stdio.h>

void print_as(int n){
    if (n == 0) return;

    else{
        print_as(n-1);
        printf("*");
    }
}

int main(){
    int num;
    printf("Enter positive integer.\n");
    scanf("%d", &num);
    print_as(num);
}

// 머리 재귀 이용.