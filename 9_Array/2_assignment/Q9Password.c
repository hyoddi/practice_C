// 8자리 이하의 패스워드를 입력받아 읽은 내용을 출력해보자
// 배열은 8자리로 선언, 5자리까지 입력이 들어왔다면 거기까지 출력해보자

#include <stdio.h>

int main(){
    char arr[9]; // 배열의 맨 끝은 \0, NULL이 저장되기 때문에 하나 더 해줘야한다.
    printf("Enter password(maximum 8)\n");
    scanf("%8s", arr); // 최대 8자 제한
    printf("%s", arr);

    return 0;
}