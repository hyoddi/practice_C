// 삽입 정렬은 카드 정렬 할 때랑 비슷한거다.
// 단계별로 진행되며, 왼쪽부터 하나씩 받아가는데, 이 때 받은 값과 왼쪽을 비교해서 왼쪽보다 작으면 왼쪽으로 이동,
// 그 이동한 값을 또 왼쪽과 비교해서 또 작으면 또 이동, 아니면 단계 종료후 다음 값을 받는다.
// 이를 반복..
// 위처럼 작으면 바로 swap 하는 full swap,
// 작다는 판단이 나와도 이를 유보하고 다음 왼쪽을 비교하는 half swap으로 나뉜다.

#include <stdio.h>

void swap(int *p, int *q){
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

void insertion_sort(int a[], int length){

    for (int i = 1; i < length; i++){
        
        for (int j = i; j > 0; j--){

            if (a[j] < a[j-1]) swap(&a[j-1], &a[j]);
            
        }
    }
    
}

int main(){
    
    int arr[50];
    int l = 0;

    printf("Enter input numbers.\n");

    while(1){
        int input;
        scanf("%d", &input);
        if (input == -1) break;

        arr[l++] = input;
    }

    insertion_sort(arr, l);

    printf("After sorting: ");
    for (int i = 0; i < l; i++){
        printf("%d ", arr[i]);
    }
}