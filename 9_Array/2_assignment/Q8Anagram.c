// 두 문자열이 순서만 다를 뿐 동일한 문자로 구성되어 있을 때 서로를 애너그램(Anagram, 어구전철)이라 한다.
// 입력은 모두 소문자, 빈칸은 무시.
// 서로 같으면 * 로 치환해보자.

#include <stdio.h>
#include <string.h>

int main(){
    char arr[50];
    char arr2[50];
    int check = 1;

    printf("Enter the first string.\n");
    // scanf("%[^\n]s", arr); // 여기서 [^문자]는 특정 문자가 나오전까지 모든 입력을 받겠다는 뜻이다. [^abc]는 a나 b나 c가 나오면 종료
    
    fgets(arr, sizeof(arr), stdin); 
    // fgets 함수를 이용하면 최대로 배열 크기 -1까지만을 읽어들인다. scnaf나 get 함수는 배열 크기를 넘어서 받아 메모리에 심각한 오류를 야기할 수 있다고 한다.


    printf("Enter second string.\n");
    fgets(arr2, sizeof(arr2), stdin);

    int len = strlen(arr);
    int len2 = strlen(arr2);
    int astcnt = 0;
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len2; j++){
            if (arr[i] == ' ') continue;

            if (arr[i] == arr2[j]){
                arr2[j] = '*';
                astcnt += 1;
                break;
            }
        }
    }
    printf("%s", arr2);
}