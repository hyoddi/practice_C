// 입력 금액이 주어지면 그 금액에 해당하는 만큼의 복권번호를 생성하는 프로그램을 작성해보자.
// 단, 정렬된 순서로 번호를 출력해야하고, 프로그램은 0원이 입력될 때까지 반복된다고 가정하자.
// 장당 천원이며, 세트 내에 동일한 번호가 나와서는 안된다.

#define MAX 6 // 세트 당 번호 MAX 개
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // 리눅스 API


void swap(int *, int *);
void set_numbers(int a[]);


int main(){

    while(1){
        int input;
        printf("Enter available money.\n");
        scanf("%d", &input);

        if (input == 0) break;

        printf("Possible sets of lottery numbers are...\n");
        for (int i = 0; i < input / 1000; i++){
            int lottery[MAX], *j;
            
            set_numbers(lottery);

            for (j = lottery; j < &lottery[MAX - 1]; j++)
                printf("%d", *(j++));
            printf("\n");            
        }
    }

    return 0;
}

void set_numbers(int a[]){
    for (int i = 0; i < MAX; i++){
        srand(time(NULL));
        int tmp = 1 + rand() % 45;
        
    }
}