#include <stdio.h>

void min_max(int a, int b, int* min, int* max){
    if (a < b){
        *min = a;
        *max = b;
    }

    else {
        *min = b;
        *max = a;
    }
}

int main(){
    int first, second, smaller, larger;
    printf("Enter two different integers.\n");
    scanf("%d%d", &first, &second);
    min_max(first, second, &smaller, &larger);
    printf("Smaller: %d, Larger: %d\n", smaller, larger);
    return 0;
}

// 이것도 Ex1과 마찬가지로,
// 메인 스택 위로 함수 스택이 호출되었으나, 포인터 변수를 이용해 메인 스택 프레임에 접근하는 식이다.
// 포인터 사용의 훌륭한 예제.