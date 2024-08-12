#include <stdio.h>

int main(){
    
    double num = 0.01;
    double res = 0; // double이니까 0.0
    int cnt = 0;
    while (cnt < 100) //0~99
    {
        res += num; //0.01를 100번 더함 => 1.0
        cnt++;
    }
    printf(res == 1.f ? "true" : "false"); // 1은 int니까 false

    return 0;
    
    
    
}