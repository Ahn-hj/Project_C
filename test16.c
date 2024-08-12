#include <stdio.h>
#define N 100 //n을 100으로 치환함 잘 사용하지않음
int main(){
    int i = 1;
    int cnt = 0;//cnt 조건을 만족하는 숫자의 개수를 세는 변수

    while ( i<= N)// N보다 작거나 같을 때 까지 반복
    {
        if ((i%3) == 0 && (i%7) == 0){//i가 3과 7의 공배수확인 %는나누기 "3과 7로 나눠서 나머지가 0일 때"  
            cnt++; //참 일 때 cnt 1증가 
            printf("%d*%d*", cnt, i);
        }
        i++;
    }
    
   
}