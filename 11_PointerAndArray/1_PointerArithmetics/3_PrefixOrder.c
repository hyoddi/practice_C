#include <stdio.h>

int main(){

    int num, *p, rabbit[] = {10, 20, 30};
    p = rabbit; // rabbit[0]을 가리킨다.
    
    num = *(++p); // 일단 p를 증가시켰으니 p는 rabbit[1]을 가리키고 있다. 즉, 20이 대입됨.
    
    p = rabbit; // 초기화

    num = ++(*p); // 일단 p가 가리키고 있는 rabbit[0], 10을 불러온다. 이후 증가, 즉 11이 대입됨.
}