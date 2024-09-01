// 재귀 호출로 해결할 수 있는 전형적인 문제로 하노이 타워 문제가 있다.
// 이는 티베트 승려들이 말뚝(X,Y,Z) X에 N개의 원반이 쌓여 있을 때, 모든 원반을 X에서 Y로 옮기는 놀이다.
// 단, 한 번에 한 개씩 움직여야 하며 매 순간 지름이 작은 원반은 항상 그보다 지름이 큰 원반 위에 놓여야 한다.
// 옮기는 과정에서 Z를 활용할 수 있다.

#include <stdio.h>

void hanoi(int N, char X, char Y, char Z){
    if (N == 1){
        hanoi(1, X, Y, Z)
    }

}

int main(){
    int num, ans;
    printf("Enter the number of disks.\n");
    num = scanf("%d", &num);
    hanoi(num, X, Y, Z);
}