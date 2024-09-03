// 정수 5개를 입력받아 배열에 저장한 후 그 중 가장 큰 수와 작은 수를 출력하는 프로그램을 작성하라.
// 단, 루프를 한 번만 돌면서 동시에 가장 큰 수와 작은 수를 갱신해야 한다.

#include <stdio.h>

int main(){

    int arr[5];
    int max, min;

    scanf("%d ", &arr[0]);
    min = max = arr[0];

    for (int i = 1; i < 5; i++){
        scanf("%d ", &arr[i]);
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    printf("min is %d. max is %d", min, max);
    
}