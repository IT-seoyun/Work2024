// 027_4장.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

void printPyramid1(int n) {
    // (1) 왼쪽 정렬된 삼각형
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid2(int n) {
    // (2) 정중앙 정렬된 삼각형
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");  // 공백 출력
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid3(int n) {
    // (3) 왼쪽 정렬된 역삼각형
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid4(int n) {
    // (4) 오른쪽 정렬된 역삼각형
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");  // 공백 출력
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid5(int n) {
    // (5) 왼쪽 정렬된 반전된 삼각형
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i - 1; j++) {
            printf(" ");  // 공백 출력
        }
        for (int j = 0; j < n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPyramid6(int n) {
    // (6) 정중앙 정렬된 역삼각형
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");  // 공백 출력
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // 자연수 n (5로 설정)

    // (1) 왼쪽 정렬된 삼각형
    printf("(1) 왼쪽 정렬된 삼각형\n");
    printPyramid1(n);
    printf("\n");

    // (2) 정중앙 정렬된 삼각형
    printf("(2) 정중앙 정렬된 삼각형\n");
    printPyramid2(n);
    printf("\n");

    // (3) 왼쪽 정렬된 역삼각형
    printf("(3) 왼쪽 정렬된 역삼각형\n");
    printPyramid3(n);
    printf("\n");

    // (4) 오른쪽 정렬된 역삼각형
    printf("(4) 오른쪽 정렬된 역삼각형\n");
    printPyramid4(n);
    printf("\n");

    // (5) 왼쪽 정렬된 반전된 삼각형
    printf("(5) 왼쪽 정렬된 반전된 삼각형\n");
    printPyramid5(n);
    printf("\n");

    // (6) 정중앙 정렬된 역삼각형
    printf("(6) 정중앙 정렬된 역삼각형\n");
    printPyramid6(n);
    printf("\n");

    return 0;
}
