#include <stdio.h>

int main() {
    int map[5][5] = {
        1,5,6,7,8,
        2,4,6,4,9,
        1,5,7,4,2,
        2,3,4,5,5,
        5,2,4,1,1};
        int i = 0, j = 0;
        int res = map[i][j]; //res = map[0][0] = 1
        while(1)
        {
            if(i== 4 && j == 4)break;// i랑 j가 4면 break
            else if (i == 4 )j++; //i가 4면 j증가
            else if (j == 4 )i++; //j가 4면 i증가
            else if (map[i+1][j] >= map[i][j+1])j++; //map[i+1][j] 가 map[i][j+1]보다 같거나 크면 j증가
            else
                i++; //아니면 i증가
            res += map[i][j]; 
        }
        printf("result : %d,res",res);
        return 0;

    }
    