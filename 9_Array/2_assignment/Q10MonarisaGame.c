// 입력 문자열을 배열에 저장 후 그 문자열의 부분 문자열을 모두 나열해보라. (모나리자 게임 해보자)

#include <stdio.h>
#include <string.h>

int main(){
    char arr[51];
    printf("Enter a string.\n");
    scanf("%50s", arr);

    int len = strlen(arr);

    for (int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            for (int k = i; k <= j; k++){
                printf("%c", arr[k]);
            }
        printf("\n");
        } 
    }
}