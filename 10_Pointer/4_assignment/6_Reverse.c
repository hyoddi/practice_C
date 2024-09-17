// 아래 함수를 호출해 문장을 거꾸로 출력하는 프로그램을 작성하라.

#include <stdio.h>
#include <string.h>

void reverse(char s[], int l){
    if (l == -1) return;
    else{
        printf("%c", s[l]);
        reverse(s, l - 1);
    }
}

int main(){

    char sen[50];

    printf("문장을 입력해주세요.\n");
    scanf("%s", sen);

    int last = strlen(sen);

    reverse(sen, last - 1);        

    return 0;
}