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
   ctrl+k+c : 블록 주석 처리
   ctrl+k+u : 블록 주석 해제
   shift+9(() : 선택한 문장 소괄호 치기
 */
// 프로그램 실행 시 영향을 주지 않는 부분
/*
컴파일러 : 사람이 작성한 코드를 컴퓨터가  이해할 수 있게 번역하는 것
 목적 코드 생성
 링커가 연결해서 실행파일 생성
 빌드 : 실행파일 생성하기
 리빌드 : 전체 재빌드 ctrl+b+r
 pdb 모든 코드 자료 포함되어 있음. 보안 필수 
 브랜치 분기 -git을 사용하여 분기점 지정 후 사용 가능
 
 브랜치 분기
 변수는 사용하기 직전에 선언한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> //입출력 관련
#include <cstdio>  // stdio.h에 네임 스페이스 추가한 래퍼
#include <stdio.h>
#include "header.h"


//using namespace std;

int main() //엔트리 포인트 : 코드가 시작되는 곳
{
    // std :: cout << "Hello World!\n"; //c++ 출력 방법
    //printf("Hello World!\n"); //c 출력방법 언리얼에서는 해당 문장을 사용함.
    //printf("조세운\n");  
    //printf("92년생입니다.\n♠┏┐\n");
    /* 이스케이프 시퀀스
    // \n : 줄 바꿈(개행문자) , \t : tab 간격 조절
       \" : " 한 개 텍스트 출력
       \\ : \ 텍스트 출력
       \r : 캐리지 리턴(리눅스에서 중요) 옛날 타자기에서 줄 바꿈 후 종이 재정립할 때 하는 작업의 토대로하는 개념
    */
    //number 라는 이름을 가진 int(인티저) 변수를 선언하고 거기에 0을 대입
    //int number; //변수 선언
    //number = 0; // 변수에 값 대입

    //int : 정수형(소수점이 없는 숫자: 1,-66, 7 등)

    //scanf("%d", &number);//c 문법 메모리 간섭 있을 수 있음
    //
    //printf("입력한 숫자는 : %d \n", number);

    //std::cin >> number; //입력 받기 C++
    //printf("입력한 숫자는 : %d \n", number);

    //// 프로그램을 실행 했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력
    //printf("나이을 입력해주세요. \n");
    //std::cin >> number;

    //printf("당신의 나이는 %d ", number);
   /* int number1 = 0;
    int number2 = 0;

    printf("숫자 1을 입력하시오 : \n");
    std::cin >> number1;
    printf("숫자 2을 입력하시오 : \n");
    std::cin >> number2;

    printf("두 숫자의 합은 %d 입니다.", number1+number2);*/


    /*
        변수(Variable)
        -변하는 숫자
        -컴퓨터에 값을 기억 시키기 위해 만들고 사용

        연산자(Operator)
        - 계산을 하기 위한 기호
        - 대입 연산자 : = 오른쪽의 값을 왼쪽에 넣어라
        - 산술 연산자 : +(더하기), -(빼기) , *(곱하기) , /(나누기) , %(나눈 후 나머지 값)
        - 복합 대입 연산자 : a += b; == a = a+b;
        - 증감 연산자 : a++; a에다가 1을 더하라  a--; a에다가 1을 뺴라
        - 비교 연산자 : ==(같다)
    */

    /*
    이진수(Binary)
    -컴퓨터는 0,1만 알 수 있기 때문에 기본적으로 이진수를 사용
    int number = 10; // 사람이 알아보기 위해 10진수로 값을 대입
                     // 실제 메모리 0000 0000 0000 0000 0000 0000 0000 1010
     ex) 13 = (2^3 * 1) +(2^2 * 1) + (2^1 * 0) + (2^0 * 1) = 1101
    */

    /*
    데이터 타입
    int : 정수형. 일반적으로 32bit 범위는 대략 -21 억 ~ +21억 int_t = 데이터 용량 관리가 필요한 상황에서 쓰이는 int타입
    float : 실수형. 32bit 태생적으로 오차가 있음. 대략 소수점 6 자리부터 오차 발생
    double : 실수형 64bit
    bool : Boolean 참/거짓 true/false만 저장 8bit라 낭비되는 부분이 없지 않아 있음
    char : charactor 글자 하나를 저장하는 데이터 타입. 8bit 정수형
    ex) char alpha = 'a'; char alpha = 97; ASCII 코드
    std::string : 문자열을 쉽게 다룰 수 있는 자료형 사이즈가 특정되지 않음
         문자열 : 글자 여러개가 연결된 것 ex) std::string str = "Hello World!!";
         char* str;
         char str[32];

     매직넘버:
     매크로 : 파일 체크 안됌. 지정 코드를 변환 ex)#define PI 3.141592f
    */
    /*
    상수(Constant)
    - 변하지 않는 수
    - 코드의 안전성과 가독성을 높여준다.(매직넘버 회피에 좋음 / 매크로와 달리 타입 체크가 가능)
    */
    /*
    비교 연산자
    - 비교를 하는 연산자. 참이냐 거짓니야가 결과로 나온다.(true, false)
    - > , < , >= , <= , ==
    a = 10;
    b = 20;
    bool result = a > b; false /  bool result = a < b; true

    int a = 50; int b = 50;
    bool result = a == b; /true 결과
    */
    //float a = 10.0f;
    //float b = 10.0f;
    //std::cin >> b;

    //bool result = a == b; //F9 브레이크 포인트 설정/해제

    /*
    * float 타입을 ==로 비교할 때 반드시 아래와 같이 진행해야 함.
    float epsilon = 0.001f;

    a < (b + epsilon) && a > (b - epsilon);*/
    /*
    제어문
    - 프로그램의 흐름을 제어하는 문(staement)
    - 조건문 if : 조건에 따라에 프로그램의 흐름을 변경하는 문 /범위 값이 작은 것 부터 사용하는 것이 좋다
    if , else if, else
    switch
    삼항 연산자
    - 반복문 for :일정 조건에 따라 코드를 반복하는 문
    */
    // 소괄호 안이 true면 중괄호 안의 코드를 실행하라
    //  내가 특정 조건을 만족할 때만 어떤 코드를 실행하고 싶을 때  사용
    //int a = 10;
    //int b = 0;
    //printf("a는 10\nb를 입력하세요");
    //std::cin >> b;
    //if (a > b)
    //{
    //    printf("if가 성공했다.\n");
    //    printf("b가 %d라서 a가 더 크다.\n",b);
    //}
    //else {
    //    printf("if가 성공했다.\n");
    //    printf("b가 %d라서 a가 작거나 같다.\n", b);
    //}
    //
    //if (b < 50)
    //{
    //    printf("b가 %d라서F.\n", b);
    //}
    //else if(b < 60) {
    //    
    //    printf("b가 %d라서 E.\n", b);
    //}
    //else if (b < 70) {
    //
    //    printf("b가 %d라서 D.\n", b);
    //}
    //else if (b < 80) {
    //
    //    printf("b가 %d라서 C.\n", b);
    //}
    //else if (b < 90) {
    //
    //    printf("b가 %d라서 B.\n", b);
    //}else{
    //      printf("b가 %d라서 A.\n", b);
    //} 

// switch
//int a = 0;
//std::cin >> a;
//switch (a) {
//case 1:
//    printf("1");
//    break;
//case 3:
//    printf("3");
//    break;
//case 5:
//    printf("5");
//    break;
//default:
//    printf("1,3,5 가 아니다");
//    break;
//}
////삼항 연산자
//int a = 10;
//int b = 20;
//int c = 0;
//if (a > b) {
//    c = a * 2 + b;
//}
//else {
//    c = a + b * 2;
//}
//c = (a > b) ? (a * 2 + b) : (a + b * 2); //삼항 연산자
/*
* 논리 연산사
* &&(And) : 양쪽의 값이 둘 다 true 일 때 true 그 외는 false
* ||(Or) : 둘 중 한 쪽의 값이 true 면 true 둘 다 false 일 때 false
* !(Not) : !뒤의 값이 true면 false , false면 true
*/


   //float number1 = 10.0f; // 10라는 float 타입의 값을 float안에 number1에 넣기
   //float number2 = 15.0; //15라는 double 타입의 값을 float안에 number2에 넣기 if 21억이 넘어가는 소수점을 가진 수 라면 32bit 한계선으로 인하여 제거되어 저장
   //
   // std::cin >> number1 >> number2;
   //printf("number1 : %f \ number2 : %.2f\n", number1, number2);

   //// 윈의 반지름을 입력 받고 넓이 구하기
   // const float Pi = 3.141592f; 상수 선언 정의
   //float radius = 0.0f;
   //printf("원의 반지름 길이를 입력하세요.\n");
   //std::cin >> number1; //radius넣어도 됌.
   //printf("원의 넓이는 %f 입니다.", number1 * number1 * 3.14); //radius ,Pi 넣어도 됌.

   /* int square = 0;
    printf("정사각형의 한 변의 길이를 입력하세요 : ");
    std::cin >> square;
    printf("정사각형의 넓이는 %d 입니다.", square * square);*/
    //오버플로우 : 대략 21억을 값 32bit를 넘어갈 때 발생하는 현상으로 -값이 나오거나, 다른 값이 나온다.
    
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
