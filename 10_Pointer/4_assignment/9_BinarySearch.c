// 1부터 100까지 상대방이 생각하는 숫자를 맞춰보자.
// 이진탐색을 이용해서.

#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int length, int value, int first, int last);

int main(){
    int l = 0, ans = -1;
    
    printf("Enter twelve integers.\n");
    while(getchar() != '\n'){
        arr[l++] = getchar();
    }
    printf("Enter data to be searched.\n");
    scanf("%d", &val);
    if (ans != -1) printf("It is in index %d.\n", ans);
    else printf("No such data.\n")
}