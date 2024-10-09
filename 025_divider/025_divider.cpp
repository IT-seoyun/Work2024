// 025_divider.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d ", i);
	}
}