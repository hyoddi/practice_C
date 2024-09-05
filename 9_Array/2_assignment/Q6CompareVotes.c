// 기호 1,2,3 중 과반수 당선자를 확인해보자.
// 10명 중 6명이 뽑아야 당선이다.
// 몇 번 당선되었는지 알리거나, 없으면 없다고 알리거나.

#include <stdio.h>

int main(){

    int result[8] = {0}; // 배열 선언과 동시에 초기화 필요.
    int winner = 0;


    printf("Enter the result of voting.\n");
    for (int i = 0; i < 10; i++){
        int tmp = 0;
        scanf("%d", &tmp);
        result[tmp-1] += 1;
    }
    
    for (int j = 0; j < 10; j++){
        if (result[j] > 5){
            winner = j + 1;
            break;
        }
    }
    if (winner != 0) printf("Number %d is the winner.\n", winner);
    else printf("없어요.");
    
    return 0;