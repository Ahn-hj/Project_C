#include <stdio.h>
//sizeof는 byte의 크기를 알려줌
int main() {
    printf("%d\n", sizeof(12.3));// 12.3은 실수형 double은 8byte 12.3f가 붙으면 float 4byte  
    printf("%d", sizeof(char)); // char은 1byte 
    return 0;
}

//프로그램 1의 실행결과 : 4 일 경우 ↑ 풀어라
// #include <stdio.h>

// int main() {
//     printf("%d\n", sizeof(12)); 12는 int 함수 4byte
//     return 0;
// }