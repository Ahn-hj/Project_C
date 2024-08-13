#include <stdio.h>
int main(void)
{
 int i = 200;
 float a = 123.456;

 i = (int)a;
 printf("%d, %3.2f", i, a);//%3.2f 3은 출력할수있는공간이 세자리
 return 0;
}