// 이미 계산된 값을 재활용하는 알고리즘은 동적 프로그래밍이라한다.
// 피보나치 수열을 재귀 호출로 구현할 경우, 이미 계산한 값을 또 다시 계산하면 실행 시간이 길어진다.
// 따라서 피보나치 값을 저장하는 배열 value[] 외에 이미 계산이 되어 있는지를 나타내는 별도의 배열 found[]를 생각해보자.
// 일단 found 배열의 모든 값을 0(false)으로 초기화, value[i] 값이 계산되면 그와 동시에 found[i]를 1(true)로 바꿀 수 있다.
// 이러면 재귀 호출 시, found[i]가 1이면 이미 계산된 value[i]를 리턴하면 된다. 아니라면 value[i]를 채우는 동시에 found[i] 값을 1로 만들어야 한다.

#include <stdio.h>

int fibo(int val[], int fnd[], int n){
    int temp;

    if (fnd[n] == 1) return val[n];

    else{
        return fibo(val, fnd, n - 1) + fibo(val, fnd, n - 2);
        val[n] = temp;
        fnd[n] = 1;

        return temp;
    }

}

int main(){
    int i, num, value[100], found[100] = {0};
    
    printf("Enter a number.\n");
    scanf("%d", &num);

    value[0] = value[1] = 1;
    found[0] = found [1] = 1;

    printf("%dth Fibonacci number is %d.\n", num, fibo(value, found, num -1));
    return 0;
}