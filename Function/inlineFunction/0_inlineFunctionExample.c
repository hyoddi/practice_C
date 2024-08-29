#include <stdio.h>

inline int add(int a, int b){
    return (a + b);
}

int main(){
    int sum, first = 10, second = 20;
    sum = add(first, second);
    printf("sum is %d.\n", sum);
    return 0;

}

// 함수 헤더 앞에 'inline'을 붙이면 인라인 함수가 되는데,
// 인라인 함수는 정의한 코드들이 인라인 함수 호출 시 그 자리에 인라인 함수 코드 자체가 안으로 들어간다는 뜻이다.
// 위의 예시로는 sum = add(first + second)와 같이 말이다.

// 결과적으로는 프로그램 실행 속도를 높이기 위한 것이다. (함수 호출하면서 해당 함수 주소로 점프했다 돌아오는 과정이 생략되서)
// 단점으로는 인라인 함수를 너무 많이 호출하면 프로그램 크기가 지나치게 커진다는 것.
// 함수 내부에 루프, 혹은 재귀 함수나 함수 포인터를 사용하면 인라인 함수를 사용할 수 없다.