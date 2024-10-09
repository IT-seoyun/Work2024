// 019.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("n을 입력:");
    scanf_s("%d", &n);

    //if (x%2==0)  //2로 나눈 나머지가 0이면 짝수
    //if (x%2==1)  //2로 나눈 나머지가 1이면 홀수

    int i = 1;
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }
    printf("1부터 %d까지의 홀수의 합:%d\n", n, sumOdd);
    printf("1부터 %d까지의 짝수의 합:%d\n", n, sumEven);
}