// 음의 정수가 들어오기 전까지 정수를 입력받되 입력을 받을 때마다 그 상태에서의 최솟값을 출력하는 프로그램을 작성하라.
// 단, 프로그램은 루프를 돌면서 반드시 아래 함수를 호출해야 한다.
// 또, 이 함수는 함수 내에서 정적 변수 min을 선언하고 매번 호출될 때마다 이전에 저장된 min 값과 넘겨받은 n 값을 비교, 더 작은 값을 리턴한다.
// 입력 정수의 크기는 100을 넘지 않는 것으로 가정.

#include <stdio.h>

int flag = 1;

int current_min(int n){
    static int min = 100;
    if (n < 0){
        flag = 0;
    }
    if (n < min){
        min = n;
    }
    return min;
}

int main(){
    while(flag){ // while문은 true = 1, false = 0
        
        int tmp;
        printf("Enter a number.\n");
        scanf("%d", &tmp);
        int ans = current_min(tmp);
        printf("Current min is %d\n", ans);
    }
}



/* 출력 예제
> Enter a number.
> 50
> Current min is 50.
> enter a number.
> Currnet min is 30.
*/