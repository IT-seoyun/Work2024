// 031.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main() {
    int numbers[10];
    int sum_even_index = 0;   // 짝수 번째 인덱스의 합
    int sum_odd_index = 0;    // 홀수 번째 인덱스의 합
    int sum_even_numbers = 0;  // 짝수인 숫자의 합
    int sum_odd_numbers = 0;   // 홀수인 숫자의 합

    // 사용자로부터 10개의 숫자를 입력받음
    printf("10개의 숫자를 입력하세요:\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);

        // 짝수 번째 인덱스의 합 계산
        if (i % 2 == 0) {
            sum_even_index += numbers[i];
        }
        else { // 홀수 번째 인덱스의 합 계산
            sum_odd_index += numbers[i];
        }

        // 짝수인 숫자의 합 계산
        if (numbers[i] % 2 == 0) {
            sum_even_numbers += numbers[i];
        }
        else { // 홀수인 숫자의 합 계산
            sum_odd_numbers += numbers[i];
        }
    }

    // 결과 출력
    printf("짝수 번째 인덱스의 합: %d\n", sum_even_index);
    printf("홀수 번째 인덱스의 합: %d\n", sum_odd_index);
    printf("짝수인 숫자의 합: %d\n", sum_even_numbers);
    printf("홀수인 숫자의 합: %d\n", sum_odd_numbers);

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
