// 입력받은 문장 중에 'e'가 있는지 확인하고 있으면 yes, 없으면 no를 출력하자.
// 단, 입력 문장을 배열에 입력한 다음 무조건 마지막에 'e'를 추가로 삽입해야 한다.
// 데이터가 끝났음을 알릴 목적으로 삽입된 문자나 숫자를 센티넬(Sentinel)이라 한다. 내가 쓰는 flag가 그거임.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char arr[50];
    int i = 0;
    int sen = 1;
    bool ans = true;

    printf("Enter input sentence.\n");
    scanf("%[^\n]", arr);

    int len = strlen(arr);
    
    while(sen){
        if (arr[i] == 'e'){
            sen = 0;
        }
        else if (i == len - 1){
            arr[i + 1] = 'e';
            ans = false;
        }
        i+=1;
    }

    printf("%s.\n", ans ? "yes" : "no");

    return 0;

}
