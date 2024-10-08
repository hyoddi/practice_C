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
    int pass, current; // pass는 단계를 뜻한다.

    for (pass = 1; pass < length; pass++){ // 1단계부터 시작
        for (current = 0; current < (length - pass); current++){ // 단계가 끝나면 다음 루프에선 마지막은 빼고 간다(length - pass). 단계가 끝나면 마지막엔 가장 큰 수가 들어갔을테니.
            if (arr[current] > arr[current + 1]) // 서로 비교해서 왼쪽 게 크면
                swap(&arr[current], &arr[current + 1]); // 둘이 스왑.
        }
    }
}