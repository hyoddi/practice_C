#include <stdio.h>

int main(){
    int i = 1;
    {
        printf("printing from 1 to 3.\n");
        int count = i;
        while (count < 4)
            printf("%d\n", count++);
    }
    // printf("%d", count);
    return 0;
}