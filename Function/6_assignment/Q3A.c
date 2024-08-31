// a,b,c가 인자로 전달되었을 때 아래 함수를 호출해서는 동시에 최소 및 최대의 값을 리턴 받을 수 없다. 함수의 리턴 값은 항상 하나이기 때문
// 대안으로 리턴 타입을 void로 만들고 전역 변수를 쓰게끔 변형해볼 수 있다.
// main에서 세 개의 정수를 입력 받은 후 변형된 함수를 호출하여 최소와 최대를 출력하는 프로그램을 작성하라.

# include <stdio.h>
int a, b, c;
void min_max(){
    int min, max;
    if (a < b){
        min = a;
        max = b;
    }
    else{
        min = b;
        max = a;
    }
    
    if (c < max){
        if (c < min)
            min = c;
    }
    else
        max = c;

    printf("min is %d, max is %d", min, max);
}


int main(){
    printf("Enter three integers.\n");
    scanf("%d %d %d", &a, &b, &c);
    min_max();
    return 0;
}



/* 출력 예제
> Enter three integers.
> 2 2 5
> min is 2, max is 5.
*/