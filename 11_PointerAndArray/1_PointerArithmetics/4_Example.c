#include <stdio.h>

int main(){
    int i, *p, arr[] = {5, 10, 15, 20 ,25};
    printf("arr[0] is %d.\n", arr[0]);
    printf("*arr is %d\n", *arr);

    p = arr; // p는 배열의 첫번째 요소를 가리키고,
    for(i = 0; i < 5; i++)
        // '\t' 는 tab키다.
        printf("%d\t", *(p+i)); // 가리키는 주소는 하나씩 커져, 모든 요소를 출력할 것이다.
    printf("\n");
    
    p = arr;
    for(i = 0; i < 5; i++)
        printf("%d\t", *p++); // 얘도 마찬가지, 후위 연산자기 때문에 p+0 출력하고 다음에 하나씩 커진다.
    printf("\n");

    p = arr;
    for(i = 0; i < 5; i++)
        printf("%d\t", (*p)++); // 얘는 5부터 하나씩 커질 거임
    printf("\n");

    return 0;
}