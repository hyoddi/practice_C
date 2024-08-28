#include <stdio.h>

void try(int a, int b){
    // 여기서 %p는 포인터의 주소를 출력한다.
    printf("Inside try, a at %p, b at %p.\n", &a, &b);
    printf("Inside try, a = %d, b = %d.\n", a, b);
    a++;
    b++;
    printf("Upon increasing, a = %d, b = %d.\n\n". a. b);
    return
}

int main(){
    int one = 1, two = 2;
    printf("In main, one at %p, two at %p.\n", &one, &two);
    printf("In main, one = %d, two = %d.\n\n", one, two);

    try(one, two);

    printf("Back to main, one at %p, two at %p.\n", &one, &two);
    printf("Back to main, one = %d, two = %d.\n", one, two);
    return 0;
}

