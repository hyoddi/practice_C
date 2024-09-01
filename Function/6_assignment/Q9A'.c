// 자연수 n을 입력받아 sum = 12 + 22 + ... + n2를 계산하여 출력하되 재귀 함수로 구현해보라.

#include <stdio.h>

int sum(int n){
    static int tmp;
    if (n == 2) return 12;
    else{
        tmp += sum(n - 10);
    }
}

int main(){
    int num, val;
    printf("Enter positive integer.\n");
    scanf("%d", &num);
    val = sum(num*10 + 2);
    printf("%d", val);
}

// 이 코드가 참 신기한거. 리턴 값이 명시되어 있지 않음에도 val 변수는 tmp의 값을 받는다.
// https://swlock.blogspot.com/2016/06/c.html 참고

// 함수내에서 의도했던 하지 않았던 마지막 tmp값을 리턴값으로 처리한다는 사실이 최종 결론 입니다.
// CPU나 컴파일러에 따라 다른 결과가 나올수도...