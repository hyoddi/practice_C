#include <stdio.h>

void sum_up(int n){
    static int sum = 0; // 정적 변수로 선언한다면, sum을 스택 프레임이 아닌 데이터 세그먼트에 저장하게 된다.

    sum += n;
    printf("Accumulated sum is: %d.\n", sum);
}

int main(){
    int num, i;
    for (i = 1; i < 4; i++){
        printf("Enter a number.\n");
        scanf("%d", &num);
        sum_up(num);
    }

    return 0;
}

/* 정적 변수 특징*/

// 프로그램이 끝날 때까지 메모리에 할당되고, 유지된다.
// 정적 변수는 프로그램 시작 시 자동으로 초기화 된다. 초기값을 명시하지 않으면 0으로.
// 'static'으로 명시된 변수는 선언된 범위 (함수 내부 또는 파일 범위)에서만 접근 가능하다.
// 예를 들어 위의 'sum' 변수는 sum_up 함수에서 선언되었으니 main에서는 접근 불가.