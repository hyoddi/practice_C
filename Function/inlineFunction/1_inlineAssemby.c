#include <stdio.h>

int power2(int num, int power){
    __asm {
        mov eax, num;
        mov ecx, power;
        shl eax, cl; // (shift left eax by lower bits of ecx register)
    }
}

int main(void){
    printf("3 times (2 to the 5) is 5d.\n", power2(3, 5));
    return 0;
}

/* 어셈블리 명령어를 소스코드에 직접 넣을 수도 있다 */
// 전술한 인라인 함수와는 다른 의미지만, C 코드 라인 중간에 삽입되었다는 의미에서 인라인 어셈블리(Inline Assembly)라고 부른다.

// 운영체제 프로그램이나 드라이버 프로그램처럼 특정 하드웨어를 직접 작동시켜야 할 경우에 사용된다고 한다. 이런 기능을 직접 제공하는 C 명령문이 없기 때문.