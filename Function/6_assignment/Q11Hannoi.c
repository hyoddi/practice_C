// 재귀 호출로 해결할 수 있는 전형적인 문제로 하노이 타워 문제가 있다.
// 이는 티베트 승려들이 말뚝(X,Y,Z) X에 N개의 원반이 쌓여 있을 때, 모든 원반을 X에서 Y로 옮기는 놀이다.
// 단, 한 번에 한 개씩 움직여야 하며 매 순간 지름이 작은 원반은 항상 그보다 지름이 큰 원반 위에 놓여야 한다.
// 옮기는 과정에서 Z를 활용할 수 있다.

#include <stdio.h>

void hanoi(int n, char x, char y, char z){ // 원반 개수, 출발지, 목적지, 경유지
    if (n == 0) return;
    else{
        hanoi(n - 1, x, z, y); // 맨 아래 원반 제외 다른 원반들을 목적지가 아닌 곳으로 옮기고..(재귀)
        printf("move a disk from %c to %c\n", x, y); // (재귀가 끝나면 마지막 하나 남겠죠) 제일 아래 원반을 목적지로 이동시키기
        hanoi(n - 1, z, y, x); // 이후 옮겼던 원반들을 다시 원래 목적지로 이동시킨다.
    }
    
}

int main(){
    int num, ans;
    char X = 'X', Y = 'Y', Z = 'Z';
    printf("Enter the number of disks.\n");
    scanf("%d", &num);
    hanoi(num, X, Y, Z);
}