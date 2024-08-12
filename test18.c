#include <stdio.h>

int main(){
    char a[] = {'1','B','C','D','E'};
    char *p;
    p = &a[2];//&은 배열의 주소 배열에서 2번째자리->c 
    printf("%c%c", *p, *(p-2));//%C%C는 연속해서 출력해라
    return 0;
   
}