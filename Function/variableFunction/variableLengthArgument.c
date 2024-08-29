#include <stdio.h>
#include <stdarg.h>

// 인자의 개수를 자유롭게 가져가려면
int find_min(int count, ...){ // 이렇게 ... 을 찍어주면 된다.
    int min, temp, i;

    va_list(p); // 함수에 전달된 인자 리스트를 가리키게 된다. (포인터) / 여기서 p는 임의 변수
    va_start(p, count); // 가변 인자 리스트 초기화
            // (가변 인자를 저장할 va_list의 변수, 가변 인자 목록의 시작을 결정하는 마지막 고정 인자)

    min = va_arg(p, int); // int 크기만큼 가변 인자 리스트에서 값을 가져온다. min은 리스트의 첫 번째 값이 되겟죠?
    for (i = 2; i <= count; i++){
        temp = va_arg(p, int); // 그리고 p는 첫 번째 인자를 읽어오고 자동으로 다음 인자로 이동하기 때문에 계속 비교가 된다...
        if (temp < min)
            min = temp;
    }
    va_end(p);
    return min;
}

int main(){
    int arg_count = 3; // 인자를 몇 개 넘길건지 설정
    printf("Minimum is %d.\n", find_min(arg_count, 30, 20, 10)); // 나는 30, 20, 10 이렇게 3개 넘길거다~
    return 0;
}

// 가변 인자 함수를 사용하려면
// va_start, va_arg, va_end 라는 세 가지 메크로 함수를 호출해야 한다. stdarg.h(standard argument header)에 포함되어있음.

