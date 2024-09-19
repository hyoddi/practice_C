// 1부터 100까지 상대방이 생각하는 숫자를 맞춰보자.
// 이진탐색을 이용해서.

#include <stdio.h>

int binary_search(int arr[], int value, int first, int last){
    
    if (first > last) return -1; // 탐색 실패
    
    int mid = (first + last) / 2;

    if (arr[mid] == value) return mid;
    else if (arr[mid] > value) return binary_search(arr, value, first, mid - 1); // 중앙값이 val보다 크다면, 왼쪽 탐색
    else return binary_search(arr, value, mid + 1, last); // 오른쪽 탐색
}

int main(){

    int val, arr[12];

    printf("Enter twelve integers.\n");
    for (int i = 0; i < 12; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter data to be searched.\n");
    scanf("%d", &val);

    int ans = binary_search(arr, val, 0, 11);

    if (ans != -1) printf("It is in index %d.\n", ans);
    else printf("No such data.\n");
}