// 회문인지 판단하는 프로그램을 작성하되 아래 재귀 함수로 해봐라.

#include <stdio.h>

int is_palindrome(char s[], int first, int last){

    if (first >= last)
        return 1; // 범위 넘어갈 때까지 참이니 종료

    if (s[first] == s[last])
        return is_palindrome(s, first + 1, last - 1); // 첫 문자와 마지막이 같으면 다음 비교
    else
        return 0;
}

int main(){

    char ch, arr[50];
    int l = 0;

    printf("Enter input sentence.\n");
    
    while((ch = getchar()) != '\n'){
        if (ch != ' ')
            arr[l++] = ch;
    }
    arr[l] = '\0';

    int ans = is_palindrome(arr, 0, l - 1);

    if (ans == 1) printf("Yes!\n");
    else printf("No!\n");
}