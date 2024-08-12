#include <stdio.h>

int main(){
    int num = 1;
    for(
        int i =1; ; i++ //i는 1씩 증가
    ){
        num = num * i ; //num은 num이랑 i가 곱한 값
        if (i > 5) // 5보다 크면 멈춰라 num은 이미 6까지 넘어갔기 때문에 720 만약 딱 5까지의 값을 구하고싶다면 >= 입력해야댐
         break;
    }
    printf("%d",num);   
}