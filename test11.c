#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1 : 
        printf("1 input\n");
        break;

    case 2 : 
        printf("2 input\n");
        break;

    case 3 : 
        printf("3 input\n");
        break;
    
    default:
        printf("error\n");
        break;
    }
    return 0;
}