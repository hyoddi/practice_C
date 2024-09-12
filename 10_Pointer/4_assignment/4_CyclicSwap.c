// a, b, c가 있을 때 순환 스왑은 a를 b로, b를 c로, c를 a로 옮기는 스왑을 말한다.
// a, b, c 값을 출력하라.

#include <stdio.h>

void cyclic_swap(int *a, int *b, int *c){
    int tmp1 = *a, tmp2 = *b, tmp3 = *c;
   
    *a = tmp3;
    *b = tmp1;
    *c = tmp2;
}

int main(){
    int n1, n2, n3;

    printf("Enter three integer a, b, c\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Before cyclic swap, a = %d, b = %d, c = %d\n", n1, n2, n3);
    cyclic_swap(&n1, &n2, &n3);
    printf("After cyclic swap, a = %d, b = %d, c = %d\n", n1, n2, n3);

    return 0;
}