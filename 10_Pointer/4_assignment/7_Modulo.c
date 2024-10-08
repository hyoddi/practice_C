// 컴퓨터에 longlong 타입의 크기를 초과하는 정수를 저장할 순 없다. 대안으로 숫자를 자릿수별로 나눠 배열에 넣는 것이다.
// 567이라면 arr[0] = 5; arr[1] = 6; arr[2] = 7;과 같이.
// 하지만 암호화 과정에서 엄청나게 큰 수에 대한 모듈로 연산이 필요할 때가 많다.
// 이 연산의 특이한 점이라면 덧셈과 곱셈에 대해 분배 법칙이 성립한다는 것이다. 예시로,
//
// 968 % 7 = (900 % 7 + 60 & 7 + 8 % 7) % 7
// 여기서, 900 % 7 = ((7 + 2) * 100) % 7 = (2 * 100) % 7 = ((9 % 7) * 100) % 7
// main을 참고로 다음 함수를 채워 이 프로그램을 완성하라.

#include <stdio.h>
#include <stdlib.h>

int modulo(int a[], const int m, const int size){
    int remainder = a[0] % m;
    for (int j = 1; j < size; j++){
        remainder = (remainder * 10 + a[j]) % m;
    }
    return remainder;
}

int main(){
    int i, mod, arr[1000];
    char ch;
    printf("Enter a big positive integer.\n");
    i = 0;
    // getchar() 함수는 입력버퍼에 입력값을 저장해놨다 하나씩 리턴해줌
    while((ch = getchar()) != '\n'){
        arr[i] = atoi(&ch); // atoi() 함수는 문자 스트링을 정수로 반환시켜준다. 안되면 0 반환.
        i++;
    }
    printf("Enter a modulus number.\n");
    scanf("%d", &mod);
    printf("The result of modulo is %d.\n", modulo(arr, mod, i));
    return 0;
}