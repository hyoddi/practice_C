// 10진수를 계속해서 2로 나누되 몫이 0이 될 때까지 나머지를 배열에 순차적으로 저장할 수 있다.
// 이후 배열을 거꾸로 읽으면서 출력하면 그것이 10진수를 2진수로 변환한 결과가 된다.
// 이 방법을 써서 입력된 10진수를 2진수로 변환하는 프로그램을 작성하라.

#include <stdio.h>

int main(){

    int n;
    int cnt = 0;
    int arr[32];
    printf("Enter a positive integer.\n");
    scanf("%d", &n);

    while(1){
        if (n / 2 == 0) break;
        arr[cnt] = n % 2;
        cnt+=1;
    }

    for (int i = cnt; i >=0; i--){
        printf("%d", i);

    }

}