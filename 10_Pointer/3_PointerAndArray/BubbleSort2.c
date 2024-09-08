// Bubble Sort, 버블 정렬은 가장 큰 숫자가 한칸씩 오른쪽으로 떠오르는 정렬이다. (한 쌍씩 비교 후 큰 거를 오른쪽으로 스왑.)

#define MAX 100
#include <stdio.h>

void print_array(const int arr[], int length);
void swap(int*, int *);
void bubble_sort(int arr[], int length);

int main(){
    int i = 0, temp, data[MAX];
    printf("Enter integers separted by a blank.\n");
    while(1){
        scanf("%d", &temp);
        if (temp < 0) // 음수 들어오면 종료
            break;
        data[i++] = temp; // i를 하나씩 증가함으로써 배열에 총 몇 개의 요소가 들어오는지 확인. i = length
    }
    
    printf("Before sorting: ");
    print_array(data, i);
    printf("\n");

    bubble_sort(data, i);
    printf("After sorting: ");
    print_array(data, i);
    printf("\n");
    return 0;
}

void print_array(const int arr[], int length){
    int i;
    for (i = 0; i <length; i++)
        printf("%d ", arr[i]);
}

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int arr[], int length){
    int pass, current, sorted = 0;

    for (pass = 1; (pass < length) && (!sorted); pass++){ // 1단계부터 시작하는 건 똑같은데, !sorted, 전 단계에서 섞이지 않았다면 종료한다는 조건 추가.
        sorted = 1;
        for (current = 0; current < (length - pass); current++){
            if (arr[current] > arr[current + 1]){
                swap(&arr[current], &arr[current + 1]);
                sorted = 0; // 섞였다면 다시 0으로 초기화 (다음 단계도 정렬 확인부탁드립니다.) -> 이번에 정렬 안했다면 sorted는 1로 계속 남아있어서 다음 루프는 종료되겠죠?
            }
        }
    }
    
}