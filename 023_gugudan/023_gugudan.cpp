// 023_gugudan.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    for (int j = 1; j <= 9; j++) {
        for (int i = 2; i <= 5; i++)
            printf("%d x %d = %d\t", i, j, i * j);
        printf("\n");
    }
    printf("\n");

    for (int j = 1; j <= 9; j++) {
        for (int i = 6; i <= 9; i++)
            printf("%d x %d = %d\t", i, j, i * j);
        printf("\n");
    }
}

