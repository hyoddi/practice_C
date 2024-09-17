// n차 다항식을 풀때, n이 클수록, 즉 곱셈 횟수가 많을수록 오류가 쌓인다.
// 부동 소수는 곱할 때마다 아래쪽 자릿수가 잘려나가기 때문.
// 대안으로 호르너 규칙, ((4.0x + 6.0)x + 7.0)x + 8.0 과 같은 형식으로 줄여 연산 정확도 높이는 방법이 있다.

#include <stdio.h>

double horner(const int n, const double p[], const double x){
    double ans = p[0];
    for (int j = 0; j < n; j++){
        ans = ans * x + p[j+1];
    }
    return ans;
}

int main(){

    int pol, x;
    double arr[20];

    printf("Enter order of polynomial.\n");
    scanf("%d", &pol);
    printf("Enter %d coefficients.\n", pol + 1);
    for (int i = 0; i <= pol; i++){
        scanf("%lf", &arr[i]);
    }
    printf("Enter value if x.\n");
    scanf("%d", &x);

    printf("The value of the polynomial is %lf.\n", horner(pol, arr, x));

}