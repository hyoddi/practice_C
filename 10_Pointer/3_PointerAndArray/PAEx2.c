#define MAX 100
#include <stdio.h>

void print_array(const int arr[], int length){
    int i;
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
}

int main(){
    int i, temp, rabbit[MAX]; // 정적 데이터 타입. 컴파일 시 배열의 크기가 미리 정해져야 한다(MAX 100)
    printf("Enter an integer.\n");
    scanf("%d", &temp);
    for (i = 0; temp >= 0; i++){
        rabbit[i] = temp;
        printf("Enter an integer.\n");
        scanf("%d", &temp);
    }

    print_array(rabbit, i);
    printf("\n");
    return 0;
}

// 이는 배열의 약점이기도 하다.
// 100개 보다 넘게 들어오면 배열 크기를 늘릴 순 없고, 적게 들어오면 나머지 공간은 낭비되기 때문.