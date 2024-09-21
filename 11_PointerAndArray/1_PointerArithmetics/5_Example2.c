#define MAX 5
#include <stdio.h>

int main(){
    int i, sum, *p, arr[MAX] = {5, 10, 15, 20, 25};
    
    sum = 0;
    for(p = arr; p < &arr[MAX]; p++) // 이런 식으로 포인터를 배열명으로 쓸 수도 있다.
        sum += *p;
    printf("Sum is %d\n", sum);

    sum = 0;
    for (i = 0; i < MAX; i++)
        sum += *(arr + i);
    printf("Sum is %d\n", sum);

    sum = 0;
    p = arr; // 마찬가지로 포인터를 배열명으로 썼다.
    for (i = 0; i < MAX; i++)
        sum += p[i];
    printf("Sum is %d\n", sum);
    
    return 0;
}