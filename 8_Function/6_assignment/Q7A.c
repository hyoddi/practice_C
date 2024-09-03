// 재귀 호출에 의해 1부터 입력된 n까지의 숫자를 순차적으로 출력하는 프로그램을 작성하라.

# include <stdio.h>
void print_up(int n){

    if (n == 0){
        return;
    }
    else{
        print_up(n - 1);  // 재귀 호출을 먼저하고
        printf("%d ", n); // 돌아오면서 일을 하게 되는 구조다.
    }
}

int main(){
    int num;
    printf("Enter the last integer.\n");
    scanf("%d", &num);
    print_up(num);
}

/* 출력예제
> Enter the last integer.
> 10
> 1 2 3 4 5 6 7 8 9 10
*/