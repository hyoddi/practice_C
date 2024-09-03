// 입력된 문장을 배열에 저장한 후 단어 사이의 빈칸이 여럿이면 그것을 하나의 빈칸으로 바꿔 출력하자.

#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    char arr2[100];
    int j = 0;

    printf("Enter sentence.\n");
    scanf("%[^\n]s", arr); // 공백 포함한 전체 문자열 받기

    printf("%s\n", arr);

    int len = strlen(arr);
    printf("%d\n", len);


    for (int i = 0; i < len; i++){
        if ((arr[i] == ' ') && (arr[i+1] == ' ')) continue;
        arr2[j++] = arr[i]; // 후위 증가 연산자 (j 사용 후 1증가)
    }

    printf("ANSWER: %s", arr2);
}