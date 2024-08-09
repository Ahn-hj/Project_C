#include <stdio.h>

int main() {
    
    int a;
    printf("input int: ");
    scanf("%d", &a);
    
    if (a%3==0 && a%7==0)
    {
        printf("3 and 7 ok");
    }else
    {
        printf("not 3 and 7");
    }
    
    
}