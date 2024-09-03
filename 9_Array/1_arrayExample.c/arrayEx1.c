#define MAX 5
#include <stdio.h>

int main(){
    int i, sum = 0; double average;
    int rabbit[MAX];

    printf("Enter weights of five rabbits.\n");
    for (i = 0; i < MAX; i++)
        scanf("%d", &rabbit[i]);
    
    for (i = 0; i < MAX; i++)
        sum += rabbit[i];
    printf("Average weight is %.3lf.\n", ((double)sum)/MAX);

    printf("&rabbit[0] is %p.\n", &rabbit[0]); // %p는 포인터 주소 출력 형식 지정자
    printf("&rabbit[1] is %p.\n", &rabbit[1]);
    printf("rabbit is %p.\n", rabbit);
    return 0;
}

/* 입출력 예제 */
/*
Enter weights of five rabbits.
5 7 5 8 5
Average weight is 6.000.
&rabbit[0] is 0x7fffffffd0a0. // 메모리 주소를 보면
&rabbit[1] is 0x7fffffffd0a4. // 자료형 크기 (4byte)만큼 주소가 올라간 것을 볼 수 있다.
rabbit is 0x7fffffffd0a0.     // 배열은 서로 붙어 있응께...

/*