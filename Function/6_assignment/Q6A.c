// 두 정수의 평균을 구할 수도 있고 세 정수의 평균을 구할 수도 있는 가변 길이 함수를 구현하라.
// 또, 프로그램이 시작하면 경우 별로 인자의 개수와 값을 입력받아 평균을 출력하는 프로그램을 작성하라.

#include <stdio.h>
#include <stdarg.h>


double average(int count, ...){
    double sum = 0;
    va_list(p);
    va_start(p, count);
    sum = va_arg(p, int);

    for (int i = 1; i < count; i ++){
        sum += va_arg(p, int);
    }

    va_end(p);
    return sum / count; // 자동 형변환 이용 (데이터 타입 더 큰 걸 따라감)

}


int main(){
    int arg_count;
    double ans;
    printf("Enter number of arguements. It must be 2 or 3.\n");
    scanf("%d", &arg_count);

    if (arg_count == 2){
        int tmp1, tmp2;
        printf("Enter two integers\n");
        scanf("%d %d", &tmp1, &tmp2);
        ans = average(arg_count, tmp1, tmp2);
    }
    else if (arg_count == 3){
        int tmp1, tmp2, tmp3;
        printf("Enter three intgers\n");
        scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
        ans = average(arg_count, tmp1, tmp2, tmp3);
    }
    
    printf("Average value is %.6lf", ans);

}





/* 출력 예제
> Enter number of arguments. It must be 2 or 3.
> 3
> Enter three integers.
> 80 90 100
> Average value is 90.000000.
*/