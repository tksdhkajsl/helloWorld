// helloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//소스파일
//주석(Comment) : 컴파일러가 무시하는 문장 
 /* 단락 주석
 /* 단락 주석 ctrl+d 한줄 복사
 * shift+Del 한줄 삭제
   shift+화살표 :  블록 잡기
   shift+alt+화살표 : 선택 세로줄 블록 잡기 
   ctrl+space : 자동 완성 기능 (인텔리전스) 띄우기
   //alt+위/아래 : 코드 줄 바꾸기
   F5 디버그 시작
   ctrl+b+b : 프로젝트 빌드 
   ctrl+상하 : 페이지 업/다운
   ctrl+좌우 : 단어별 띄우기
 */
// 프로그램 실행 시 영향을 주지 않는 부분
/*
컴파일러 : 사람이 작성한 코드를 컴퓨터가  이해할 수 있게 번역하는 것
 목적 코드 생성
 링커가 연결해서 실행파일 생성
 빌드 : 실행파일 생성하기
 리빌드 : 전체 재빌드 ctrl+b+r
 pdb 모든 코드 자료 포함되어 있음. 보안 필수 
 브랜치 분기
 추가추가
 추가추가추가
 cnrkcnrkcnrk
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> //입출력 관련
#include <cstdio>  // stdio.h에 네임 스페이스 추가한 래퍼
#include <stdio.h>
#include "header.h"


//using namespace std;

int main() //엔트리 포인트 : 코드가 시작되는 곳
{
   //// std :: cout << "Hello World!\n"; //c++ 출력 방법
   //printf("Hello World!\n"); //c 출력방법 언리얼에서는 해당 문장을 사용함.
   //printf("조세운\n");  
   //printf("92년생입니다.\n♠┏┐\n");
   ///* 이스케이프 시퀀스
   //// \n : 줄 바꿈(개행문자) , \t : tab 간격 조절
   //   \" : " 한 개 텍스트 출력
   //   \\ : \ 텍스트 출력
   //   \r : 캐리지 리턴(리눅스에서 중요) 옛날 타자기에서 줄 바꿈 후 종이 재정립할 때 하는 작업의 토대로하는 개념 
   //*/
   //int number = 0;

   //scanf("%d", &number);//c 문법 메모리 간섭 있을 수 있음
   //
   //printf("입력한 숫자는 : %d \n", number);

   //std::cin >> number; //입력 받기 C++
   //printf("입력한 숫자는 : %d \n", number);
   //// std :: cout << "Hello World!\n"; //c++ 출력 방법
   //printf("Hello World!\n"); //c 출력방법 언리얼에서는 해당 문장을 사용함.
   //printf("조세운\n");  
   //printf("92년생입니다.\n♠┏┐\n");
   ///* 이스케이프 시퀀스
   //// \n : 줄 바꿈(개행문자) , \t : tab 간격 조절
   //   \" : " 한 개 텍스트 출력
   //   \\ : \ 텍스트 출력
   //   \r : 캐리지 리턴(리눅스에서 중요) 옛날 타자기에서 줄 바꿈 후 종이 재정립할 때 하는 작업의 토대로하는 개념 
   //*/
   //int number = 0;

   //scanf("%d", &number);//c 문법 메모리 간섭 있을 수 있음
   //
   //printf("입력한 숫자는 : %d \n", number);

   //std::cin >> number; //입력 받기 C++
   //printf("입력한 숫자는 : %d \n", number);

   //// 프로그램을 실행 했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력
   //printf("나이을 입력해주세요. \n");
   //std::cin >> number;

   //printf("당신의 나이는 %d ", number);
    ////* 출력
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    // 미로 출력
    printf("□□□□□□□□\n");
    printf("□   □  □   □\n");
    printf("□     □     □\n");
    printf("□□□□□□□□\n");
   // 두 수 스왑
    int a = 0;
    int b = 0;
    int c = 0;
   // printf("a 의 숫자를 입력해주세요.");
   // std::cin >> a;
   // printf("b 의 숫자를 입력해주세요.");
   // std::cin >> b;
   // printf("현재 a = %d ,b = %d 입니다.\n", a, b);
   // c=b;
   // a=b;
   // b=c;
   // printf("스왑 후 a = %d ,b = %d 입니다.\n", a, b);
   //// 삼각형 넓이
   // printf("삼각형의 가로 값을 입력해주세요.");
   // std::cin >> a;
   // printf("삼각형의 세로 값을 입력해주세요.");
   // std::cin >> b;
   // printf("삼각형의 넓이는 %d 입니다.\n", a * b / 2);
   // // 두 수를 입력 받아 나머지를 출력하기(%연산자 사용 금지)
   // int mok = a / b;
   // int remain = a - (mok * b);
   // printf("a 의 숫자를 입력해주세요.");
   // std::cin >> a;
   // printf("b 의 숫자를 입력해주세요.");
   // std::cin >> b;
   // 
   // printf("a = %d 와 b = %d 를 나눈 나머지 값은 %d 입니다.", a, b, remain);
    // 초를 입력하여 시분초 구하기
    
    printf("초를 입력하세요. \n");
    std::cin >> a;
    int hour = a / 3600;
    //int minute = a / 60;
    int minute = a / 60 % 60;
    int sec = a % 60;

   //// 프로그램을 실행 했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력
   //printf("나이을 입력해주세요. \n");
   //std::cin >> number;

   //printf("당신의 나이는 %d ", number);
    /*hour = minute / 60;
    minute = minute % 60;*/
    /*hour = a / 3600;
    minute = a / 60 % 60;
    sec = a % 60;*/
    printf("입력한 초를 시분초로 출력하면 %d 시 %d 분 %d 초 입니다.\n", hour, minute, sec);
    
   /*동전 개수 계산하기
   금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
   금액이 큰 동전을 최대한 많이 받아야 한다.*/
    printf("금액을 입력하세요. \n");
    std::cin >> a;
    int money_500 = a / 500;
    int money_100 = a % 500 / 100;
    int money_50 = a % 500 % 100 / 50;
    int money_10 = a % 500 % 100 % 50 / 10;

    char star = '*';

    for (int i = 0; i < 5; i+2) {
        printf(star);
    }
    printf("%d 원의 500원의 개수: %d 개, 100원의 개수: %d 개, 50원의 개수: %d 개, 10원의 개수: %d 개 입니다.\n", a, money_500, money_100, money_50, money_10);
       
   /*자리수 분리하기(입력은 항상 세자리라고 가정)
   수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
   각 자리의 수를 합해서 출력하기*/
    printf("세자리 수를 입력하세요. \n");
    std::cin >> a;
    int hundred = a / 100;
    int ten = a % 100 / 10;
    int one = a % 100 % 10;

    printf("백의 자리 수는 %d , 십의 자리 수는 %d, 일의 자리 수는 %d 이고, \n", hundred, ten, one);
    printf("각 수의 합은 %d 입니다.", hundred + ten + one);
    return 0;
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
