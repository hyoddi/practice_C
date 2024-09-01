#include <stdio.h>

// 재귀 함수 정의
int calculate_sum(int n) {
    // 기본 조건: n이 1보다 작거나 같을 때 0을 반환
    if (n <= 0) {
        return 0;
    }
    // 현재 n2를 계산하고, n-1에 대해 재귀 호출
    return (n * 10 + 2) + calculate_sum(n - 1);
}

int main() {
    int n;
    
    // 사용자로부터 자연수 입력 받기
    printf("자연수 n을 입력하세요: ");
    scanf("%d", &n);
    
    // 재귀 함수를 호출하여 결과 계산
    int result = calculate_sum(n);
    
    // 결과 출력
    printf("결과: %d\n", result);
    
    return 0;
}
