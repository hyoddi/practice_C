#include <stdio.h>

void sum_up(int n){
    int sum = 0;
    sum += n;
    printf("Accumulated sum is %d.\n", sum);
    
}

int main(){

    int num, i;
    for(i=1; i<4; i++){
        printf("Enter an integer.\n");
        scanf("%d", &num);
        sum_up(num);
    }
    return 0;
}

/* 이 예제는 정수가 입력될 때마다 그때까지의 누계를 출력하려는 프로그램이나,
   main 함수에서 sum_up 함수를 호출할 때마다 스택 프레임이 생성되어 내부에 변수가 생성, 0으로 초기화되기 된다.
   이어 '지역변수' 이기 때문에 함수 실행을 마치면 바로 사라진다.
   (되돌아갈때 변수가 저장된 스택 프레임 전체가 날아가기 때문)
*/
