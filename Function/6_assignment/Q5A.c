// 자연수 n을 입력받은 후 재귀 호출에 의해 1부터 n까지의 합을 출력하는 프로그램을 작성하라.
# include <stdio.h>

int sum(int n){
    if (n == 1) return 1;

    else{
        return n + sum(n - 1);
    }
}


int main(){
    int num;
    printf("Enter positive integer.\n");
    scanf("%d", &num);
    int ans = sum(num);
    printf("Answer is %d.", ans);
}