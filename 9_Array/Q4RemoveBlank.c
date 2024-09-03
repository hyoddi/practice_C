// 입력된 문장을 배열에 저장한 후 단어 사이의 빈칸이 여럿이면 그것을 하나의 빈칸으로 바꿔 출력하자.

#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    char arr2[100];

    printf("Enter sentence.\n");
    scanf("%[^\n]s", arr);

    int len = strlen(arr);
    // printf("%d", len);

    for (int i = 0; i < len; i++){
        if (arr[i] == arr[i + 1] && arr[i] == ' ') continue;

        arr[i] = arr2[i];
    }

    printf("%s", arr2);
}