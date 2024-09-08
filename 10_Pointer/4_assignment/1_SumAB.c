// a, b를 더해 *p에 저장하는 함수를 작성, 후에 main에서 이 함수를 호출에 결과 출력

#include <stdio.h>

void add(const int a, const int b, int *p){
    int tmp = a + b;
    *p = tmp;
}

int main(){
    int v1, v2, sum = 0;
    printf("Enter two integers.\n");
    scanf("%d %d", &v1, &v2);

    int *ptr = &sum;
    add(v1, v2, ptr);

    printf("%d", sum);
}