#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    for (i = 0; i < 20; i++)
        printf("%d ", 1 + rand() % 10); // 난수의 범위는 0부터 RAND_MAX 까지이나, 
    printf("\n");

    // 입력이 같으면 출력이 같다. 입력되는 seed가 매번 동일한 숫자 열이 나오는데, 이는 직전의 난수가 seed가 되기 때문. 그래서 해결 방법으론
    srand(time(NULL)); // 현재 시간 값을 시드로 넣어주는 방법이 있다.
    for ( i = 0; i < 20; i++)
        printf("%d ", (1 + rand() % 10)); // 이러면 1부터 10 이하의 난수만 나오겠죠? 범위 조절 방법이다.
    printf("\n");
    return 0;
}


