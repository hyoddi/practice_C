// Selection Sort, 선택 정렬은 매 단계의 가장 큰 것을 마지막으로 가져가는 방식이다.

#define MAX 100
#include <stdio.h>

void print_array(const int arr[], int length);
void swap(int*, int *);
void selection_sort(int arr[], int length);

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

    selection_sort(data, i);
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

void selection_sort(int arr[], int length){
    int last, largest, current;

    for (last = length - 1; last > 0; last--){ // 배열의 마지막 = 길이 - 1; 
        largest = 0;
        for (current = 1; current <= last; current++){ // 단계가 끝나면 배열의 마지막엔 항상 가장 큰 수가 들어가 있으니, 단계별로 last가 하나씩 줄어드는 것.
            if (arr[current] > arr[largest]) // 현재 요소가 배열의 마지막 요소보다 크면
                largest = current; // 인덱스 값을 largest에 저장
        }
        swap(&arr[largest], &arr[last]); // swap 함수를 호출해서 서로 바꾼다.
    }
}