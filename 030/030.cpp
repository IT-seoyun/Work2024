﻿// 030.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main() {
    int numbers[10];
    int max = -2147483648; // 가장 작은 정수로 초기화
    int second_max = -2147483648; // 두 번째로 큰 값도 가장 작은 정수로 초기화

    // 사용자로부터 10개의 숫자를 입력받음
    printf("10개의 숫자를 입력하세요:\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);

        // 입력된 숫자가 max보다 크면 max와 second_max를 업데이트
        if (numbers[i] > max) {
            second_max = max; // 이전 max를 second_max에 저장
            max = numbers[i]; // 새로운 max로 업데이트
        }
        else if (numbers[i] > second_max && numbers[i] < max) {
            second_max = numbers[i]; // second_max 업데이트
        }
    }

    // 결과 출력
    if (second_max == -2147483648) {
        printf("두 번째 큰 값이 존재하지 않습니다.\n");
    }
    else {
        printf("가장 큰 값: %d\n", max);
        printf("두 번째 큰 값: %d\n", second_max);
    }

    
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
