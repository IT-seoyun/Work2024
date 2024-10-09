// 000_name.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 
// 자신의 이름 10번 출력
// 
//[반복의 규칙]~몇 번 반복하기
//1)시작:i=0
//2)반복 조건:i<10
//3)변화:i++

//[반복의 동작]
//-이름을 출력하기
#include <stdio.h>

int main()
{  //while 문
    int i = 0;
    while (i < 10) {
        printf("임서윤\n" );
        i++;
    }

    //for문  
    for (int i = 0; i < 10; i++) {
        printf("임서윤\n");
    }


    //2.1에서 10까지 출력
    // [반복의 규칙]
    //1)시작:i=1
    //2)반복 조건:i<=10
    //3)변화:i++

    //[반복의 동작]
    //1부터 10까지 하나씩 증가한 수를 출력

    for (int i = 1; i <= 10; i++)
        printf("%d\n", i);


    //3.1에서 10까지 홀수만 출력
    // [반복의 규칙]
    //1)시작:i=1
    //2)반복 조건:i<=10
    //3)변화:i+=2

    //[반복의 동작]
    //i를  출력

    for (int i = 1; i <= 10; i += 2)
        printf("%d\n", i);


        //4.10에서 1까지 짝수만 출력
        // [반복의 규칙]
        //1)시작:i=10
        //2)반복 조건:i>=1
        //3)변화:i-=2

        //[반복의 동작]
        //i를  출력

    i = 10;
    while (i >= 1) {
        printf(" % d", i);
        i -= 2;
    }
    printf("\n");


    //16.100도에서 0도까지 10도씩 변화하면서 화씨온도를 섭씨로 변환하여 출력하기
       // [반복의 규칙]
       //1)시작:f=100
       //2)반복 조건:f>=0
       //3)변화:f-=10

       //[반복의 동작]
       //1)c=5./9*(f-32)를 출력
    printf("화씨\t섭씨\n");
    printf("============\n");
    for (float f = 100; f >= 0; f -= 10) {
        float c = (5. / 9) * (f - 32);
        printf("%3.f\t%4.1f\n", f, c);
    }


 //17.65에서 70까지 정수와 문자로 출력하기
       // [반복의 규칙]
       //1)시작:i=65
       //2)반복 조건:i<=70 
       //3)변화:i++

       //[반복의 동작]
       //1)i를 char,int로 출력

    for (int i=65; i<=70;i++) 
        printf("%d %c\n",i,i);

    //18.1부터 n까지의 합
       // [반복의 규칙]
       //1)시작:i=1
       //2)반복 조건:i<=n
       //3)변화:i++

       //[반복의 동작]
       //1)sum=sum+1
       //2)sum 출력
    int n;
    int sum = 0;

    printf("n 입력 : ");
    scanf_s("%d", &n);
    
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("%d\n", sum);

    // 19. 1부터 n까지의 홀수와 짝수의 합
     // [반복의 규칙]
     // (1) 시작 : i = 1
     // (2) 반복조건 : i <= n
     // (3) 변화 : i++

     // [반복의 동작]
     // (1) 짝수이면 evenSum = evenSum + i
     // (2) 홀수이면 oddSum = oddSum + i
     // (3) evenSum과 oddSum 출력
    int oddSum = 0;
    int evenSum = 0;

    printf("n 입력 : ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++)
        if (i % 2 == 1)
            oddSum += i;
        else
            evenSum += i;

    printf("홀수합 = %d, 짝수합 = %d\n", oddSum, evenSum);

    // 20. n1부터 n2까지의 n3의 배수를 출력하고 배수의 합을 구하라
    // [반복의 규칙]
    // (1) 시작 : i = n1
    // (2) 반복조건 : i <= n2
    // (3) 변화 : i++

    // [반복의 동작]
    // (1) n3의 배수이면 i를 출력하고, sum = sum + i
    // (2) sum 출력
    int n1, n2, n3;

    sum = 0;
    printf("n1, n2, n3 입력 : ");
    scanf_s("%d %d %d", &n1, &n2, &n3);
    for (int i = n1; i <= n2; i++)
        if (i % n3 == 0) {
            printf("%d ", i);
            sum += i;
        }

    printf("\nsum = %d\n", sum);

    // 21. 1부터 n까지의 합, 홀수의 합, 짝수의 합을 구하시오
    // [반복의 규칙]
    // (1) 시작 : i = 1
    // (2) 반복조건 : i <= n
    // (3) 변화 : i++

    // [반복의 동작]
    // (1) sum = sum + i
    // (2) 홀수이면 oddSum += i, 짝수이면 evenSum += i
    // (2) sum, oddSum, evenSum 출력
    oddSum = 0;
    evenSum = 0;
    sum = 0;

    printf("n 입력 : ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += i;
        if (i % 2 == 1)
            oddSum += i;
        else
            evenSum += i;
    }

    printf("합 = %d, 홀수합 = %d, 짝수합 = %d\n",
        sum, oddSum, evenSum);

    // 22. n을 입력받아 구구단 출력하기
    // [반복의 규칙]
    // (1) 시작 : i = 1
    // (2) 반복조건 : i <= 9
    // (3) 변화 : i++

    // [반복의 동작]
    // (1) n * i 를 계산해서 포맷에 맞게 출력

    printf("구구단 n 입력 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= 9; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}