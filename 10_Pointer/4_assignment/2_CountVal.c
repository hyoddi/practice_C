// -1이 들어오기 전가지 정수를 입력받아, 찾고자 하는 정수가 몇 번 나왔는지를 계산해 출력하자.
// 재귀함수로 구현해보자.

#include <stdio.h>

int count(const int a[], const int comp, int last){ // 배열, 찾고자 하는 수, 배열의 마지막 인덱스 값
    if (last < 0) return 0; // 베이스 케이스: 인덱스가 -1일 때, 정수 0 반환


    if (a[last] == comp) // 찾고자 하는 값이라면
        return 1 + count(a, comp, last -1); // 1을 더해서 재귀호출
    
    else return count(a, comp, last - 1); // 아니면 그냥 호출

}

int main(){

    int find, ans, i = 0, arr[50];

    printf("Enter input numbers.\n");
    while(1){
        int tmp;
        scanf("%d", &tmp);
        
        if (tmp == -1) break; // -1 들어오면 종료

        arr[i++] = tmp; // 아니면 배열에 계속 저장 및 i 하나씩 증가

    }
    
    printf("Enter a number to search.\n");
    scanf("%d", &find);
    ans = count(arr, find, i - 1);
    printf("%d appear %d times", find ,ans);
}
