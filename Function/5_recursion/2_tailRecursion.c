#include <stdio.h>

void reverse(int n){
    if (n ==0)
        return;
    else{
        printf("%d", n % 10);
        reverse(n / 10);
    }
}

int main(){
    int num;
    printf("Enter a positive integer.\n");
    scanf("%d", &num);
    reverse(num);
    printf("\n");
    return 0;
}