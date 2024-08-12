#include <stdio.h>

int main(){
    int n1 = 172;
    int n2 = 387;

    while (n1 != n2)  //n1과 n2가 같아질 때까지 계속
    {
        if(n1 > n2) n1-=n2; // n1이 n2보다 크면 n1-n2
        else n2-=n1; //n1이 n2보다 작거나 크면 n2-n1
    }
    printf("%d",n1);

    return 0;
   
}