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
   // printf("   *\n");
   // printf("  ***\n");
   // printf(" *****\n");
   // // 미로 출력
   // printf("□□□□□□□□\n");
   // printf("□   □  □   □\n");
   // printf("□     □     □\n");
   // printf("□□□□□□□□\n");
   //// 두 수 스왑
   // int a = 0;
   // int b = 0;
   // int c = 0;
   //// printf("a 의 숫자를 입력해주세요.");
   //// std::cin >> a;
   //// printf("b 의 숫자를 입력해주세요.");
   //// std::cin >> b;
   //// printf("현재 a = %d ,b = %d 입니다.\n", a, b);
   //// c=b;
   //// a=b;
   //// b=c;
   //// printf("스왑 후 a = %d ,b = %d 입니다.\n", a, b);
   ////// 삼각형 넓이
   //// printf("삼각형의 가로 값을 입력해주세요.");
   //// std::cin >> a;
   //// printf("삼각형의 세로 값을 입력해주세요.");
   //// std::cin >> b;
   //// printf("삼각형의 넓이는 %d 입니다.\n", a * b / 2);
   //// // 두 수를 입력 받아 나머지를 출력하기(%연산자 사용 금지)
   //// int mok = a / b;
   //// int remain = a - (mok * b);
   //// printf("a 의 숫자를 입력해주세요.");
   //// std::cin >> a;
   //// printf("b 의 숫자를 입력해주세요.");
   //// std::cin >> b;
   //// 
   //// printf("a = %d 와 b = %d 를 나눈 나머지 값은 %d 입니다.", a, b, remain);
   // // 초를 입력하여 시분초 구하기
   // 
   // printf("초를 입력하세요. \n");
   // std::cin >> a;
   // int hour = a / 3600;
   // //int minute = a / 60;
   // int minute = a / 60 % 60;
   // int sec = a % 60;

   ////// std :: cout << "Hello World!\n"; //c++ 출력 방법
   ////printf("Hello World!\n"); //c 출력방법 언리얼에서는 해당 문장을 사용함.
   ////printf("조세운\n");  
   ////printf("92년생입니다.\n♠┏┐\n");
   /////* 이스케이프 시퀀스
   ////// \n : 줄 바꿈(개행문자) , \t : tab 간격 조절
   ////   \" : " 한 개 텍스트 출력
   ////   \\ : \ 텍스트 출력
   ////   \r : 캐리지 리턴(리눅스에서 중요) 옛날 타자기에서 줄 바꿈 후 종이 재정립할 때 하는 작업의 토대로하는 개념 
   ////*/
   ////int number = 0;

   ////scanf("%d", &number);//c 문법 메모리 간섭 있을 수 있음
   ////
   ////printf("입력한 숫자는 : %d \n", number);

   ////std::cin >> number; //입력 받기 C++
   ////printf("입력한 숫자는 : %d \n", number);

   ////// 프로그램을 실행 했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력
   ////printf("나이을 입력해주세요. \n");
   ////std::cin >> number;

   ////printf("당신의 나이는 %d ", number);
   // /*hour = minute / 60;
   // minute = minute % 60;*/
   // /*hour = a / 3600;
   // minute = a / 60 % 60;
   // sec = a % 60;*/
   // printf("입력한 초를 시분초로 출력하면 %d 시 %d 분 %d 초 입니다.\n", hour, minute, sec);
   // 
   ///*동전 개수 계산하기
   //금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
   //금액이 큰 동전을 최대한 많이 받아야 한다.*/
   // printf("금액을 입력하세요. \n");
   // std::cin >> a;
   // int money_500 = a / 500;
   // int money_100 = a % 500 / 100;
   // int money_50 = a % 500 % 100 / 50;
   // int money_10 = a % 500 % 100 % 50 / 10;
   // ////* 출력
   // printf("   *\n");
   // printf("  ***\n");
   // printf(" *****\n");
   // // 미로 출력
   // printf("□□□□□□□□\n");
   // printf("□   □  □   □\n");
   // printf("□     □     □\n");
   // printf("□□□□□□□□\n");
   //// 두 수 스왑
   // int a = 0;
   // int b = 0;
   // int c = 0;
   //// printf("a 의 숫자를 입력해주세요.");
   //// std::cin >> a;
   //// printf("b 의 숫자를 입력해주세요.");
   //// std::cin >> b;
   //// printf("현재 a = %d ,b = %d 입니다.\n", a, b);
   //// c=b;
   //// a=b;
   //// b=c;
   //// printf("스왑 후 a = %d ,b = %d 입니다.\n", a, b);
   ////// 삼각형 넓이
   //// printf("삼각형의 가로 값을 입력해주세요.");
   //// std::cin >> a;
   //// printf("삼각형의 세로 값을 입력해주세요.");
   //// std::cin >> b;
   //// printf("삼각형의 넓이는 %d 입니다.\n", a * b / 2);
   //// // 두 수를 입력 받아 나머지를 출력하기(%연산자 사용 금지)
   //// int mok = a / b;
   //// int remain = a - (mok * b);
   //// printf("a 의 숫자를 입력해주세요.");
   //// std::cin >> a;
   //// printf("b 의 숫자를 입력해주세요.");
   //// std::cin >> b;
   //// 
   //// printf("a = %d 와 b = %d 를 나눈 나머지 값은 %d 입니다.", a, b, remain);
   // // 초를 입력하여 시분초 구하기
   // 
   // printf("초를 입력하세요. \n");
   // std::cin >> a;
   // int hour = a / 3600;
   // //int minute = a / 60;
   // int minute = a / 60 % 60;
   // int sec = a % 60;

   ////// 프로그램을 실행 했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력
   ////printf("나이을 입력해주세요. \n");
   ////std::cin >> number;

   ////printf("당신의 나이는 %d ", number);
   // /*hour = minute / 60;
   // minute = minute % 60;*/
   // /*hour = a / 3600;
   // minute = a / 60 % 60;
   // sec = a % 60;*/
   // printf("입력한 초를 시분초로 출력하면 %d 시 %d 분 %d 초 입니다.\n", hour, minute, sec);
   // 
   ///*동전 개수 계산하기
   //금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
   //금액이 큰 동전을 최대한 많이 받아야 한다.*/
   // printf("금액을 입력하세요. \n");
   // std::cin >> a;
   // int money_500 = a / 500;
   // int money_100 = a % 500 / 100;
   // int money_50 = a % 500 % 100 / 50;
   // int money_10 = a % 500 % 100 % 50 / 10;

   // char star = '*';

   //     printf("%d 원의 500원의 개수: %d 개, 100원의 개수: %d 개, 50원의 개수: %d 개, 10원의 개수: %d 개 입니다.\n", a, money_500, money_100, money_50, money_10);
   //    
   ///*자리수 분리하기(입력은 항상 세자리라고 가정)
   //수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
   //각 자리의 수를 합해서 출력하기*/
   // printf("세자리 수를 입력하세요. \n");
   // std::cin >> a;
   // int hundred = a / 100;
   // int ten = a % 100 / 10;
   // int one = a % 100 % 10;
   // for (int i = 0; i < 5; i+2) {
   //     printf(star);
   // }
   // printf("%d 원의 500원의 개수: %d 개, 100원의 개수: %d 개, 50원의 개수: %d 개, 10원의 개수: %d 개 입니다.\n", a, money_500, money_100, money_50, money_10);
   //    
   ///*자리수 분리하기(입력은 항상 세자리라고 가정)
   //수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
   //각 자리의 수를 합해서 출력하기*/
   // printf("세자리 수를 입력하세요. \n");
   // std::cin >> a;
   // int hundred = a / 100;
   // int ten = a % 100 / 10;
   // int one = a % 100 % 10;

   // printf("백의 자리 수는 %d , 십의 자리 수는 %d, 일의 자리 수는 %d 이고, \n", hundred, ten, one);
   // printf("각 수의 합은 %d 입니다.", hundred + ten + one);
    //실습 Day_2
   // char star = '*';

   //     printf("%d 원의 500원의 개수: %d 개, 100원의 개수: %d 개, 50원의 개수: %d 개, 10원의 개수: %d 개 입니다.\n", a, money_500, money_100, money_50, money_10);
   //    
   ///*자리수 분리하기(입력은 항상 세자리라고 가정)
   //수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
   //각 자리의 수를 합해서 출력하기*/
   // printf("세자리 수를 입력하세요. \n");
   // std::cin >> a;
   // int hundred = a / 100;
   // int ten = a % 100 / 10;
   // int one = a % 100 % 10;
   // for (int i = 0; i < 5; i+2) {
   //     printf(star);
   // }
   // printf("%d 원의 500원의 개수: %d 개, 100원의 개수: %d 개, 50원의 개수: %d 개, 10원의 개수: %d 개 입니다.\n", a, money_500, money_100, money_50, money_10);
   //    
   ///*자리수 분리하기(입력은 항상 세자리라고 가정)
   //수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
   //각 자리의 수를 합해서 출력하기*/
   // printf("세자리 수를 입력하세요. \n");
   // std::cin >> a;
   // int hundred = a / 100;
   // int ten = a % 100 / 10;
   // int one = a % 100 % 10;

   // printf("백의 자리 수는 %d , 십의 자리 수는 %d, 일의 자리 수는 %d 이고, \n", hundred, ten, one);
   // printf("각 수의 합은 %d 입니다.", hundred + ten + one);
    //실습 Day_2
    //int a = 0;
    //int b = 0;
    //int c = 0;
    //// 숫자를 입력받아 양수인지 음수인지 0인지 출력

    //printf("숫자를 입력해주세요\n");
    //std::cin >> a;

    //if (a < 0) 
    //{
    //    printf("입력하신 %d는 음수입니다.\n", a);
    //}
    //else if (a > 0) 
    //{
    //    printf("입력하신 %d는 양수입니다.\n", a);
    //}
    //else
    //{
    //    printf("입력하신 %d는 0입니다.\n", a);
    //}

    //// 숫자를 입력받아 홀수인지 짝수인지 출력

    //printf("숫자를 입력해주세요\n");
    //std::cin >> a;

    //if (a % 2 == 0) {
    //    printf("입력하신 %d는 짝수입니다.\n", a);
    //}
    //else {
    //    printf("입력하신 %d는 홀수입니다.\n", a);
    //}
    //// 두 수를 입력 받아 더 큰 수를 출력하기 같을 경우는 같다고 출력
    //printf("두 숫자를 입력해주세요\n");
    //std::cin >> a;
    //std::cin >> b;

    //if (a > b) {
    //    printf("입력하신 a = %d, b = %d 이므로 a가 더 큽니다.\n", a, b);
    //}
    //else if(a < b){
    //    printf("입력하신 a = %d, b = %d 이므로 b가 더 큽니다.\n", a, b);
    //}
    //else {
    //    printf("입력하신 a = %d, b = %d 이므로 두 수는 같습니다.\n", a, b);
    //}
    ////나이와 키를 입력 받아 6세 이상 120cm 이상일 때
    ////롤러코스터 탑승 가능 그외에는 불가능 출력
    //printf("나이를 입력해주세요\n");
    //std::cin >> a;
    //printf("키를 입력해주세요\n");
    //std::cin >> b;

    //if (a >= 6 && b >= 120) {
    //    printf("롤러코스터 탑승 기준에 부합합니다. 탑승 가능\n");
    //}
    //else{
    //    printf("롤러코스터 탑승 기준에 부합하지 않습니다. 탑승 불가능\n");
    //}
    //// 점수를 입력 받아 90 >= A , 80 >= B, 70 >= C, 60 >= D, 나머지 F
    //printf("점수를 입력해주세요\n");
    //if (a > b) {
    //    printf("입력하신 a = %d, b = %d 이므로 a가 더 큽니다.\n", a, b);
    //}
    //else if(a < b){
    //    printf("입력하신 a = %d, b = %d 이므로 b가 더 큽니다.\n", a, b);
    //}
    //else {
    //    printf("입력하신 a = %d, b = %d 이므로 두 수는 같습니다.\n", a, b);
    //}
    ////나이와 키를 입력 받아 6세 이상 120cm 이상일 때
    ////롤러코스터 탑승 가능 그외에는 불가능 출력
    ////unsigned int : 정수가 양수 고정인 정보만 사용되면 해당 문구를 추가하여 최적화
    ////const unsigned int LimitAge = 5;
    ////const float LimitHeight = 120.0f; 
    ////암시적 변환(보통 표현 범위가 큰 쪽으로 변경됨)
    //printf("나이를 입력해주세요\n");
    //std::cin >> a;
    //printf("키를 입력해주세요\n");
    //std::cin >> b;

    //if (a >= 6 && b >= 120) { //매직넘버의 사용은 안 좋다.
    //    printf("롤러코스터 탑승 기준에 부합합니다. 탑승 가능\n");
    //}
    //else{
    //    printf("롤러코스터 탑승 기준에 부합하지 않습니다. 탑승 불가능\n");
    //}
    //// 점수를 입력 받아 90 >= A , 80 >= B, 70 >= C, 60 >= D, 나머지 F
    //printf("점수를 입력해주세요\n");
    //std::cin >> a;
    //if (a >= 90) {
    //    printf("점수가 %d 이므로 A 학점입니다.\n", a);
    //}
    //else if (a >= 80) {
    //    printf("점수가 %d 이므로 B 학점입니다.\n", a);
    //}
    //else if (a >= 70) {
    //    printf("점수가 %d 이므로 C 학점입니다.\n", a);
    //}
    //else if (a >= 60) {
    //    printf("점수가 %d 이므로 D 학점입니다.\n", a);
    //}
    //else {
    //    printf("당신의 학점 F입니다. 계절학기 준비하세요.\n");
    //}

    ////세 과목 점수를 입력 받아 세 과목 모두 60점 이상이면 합격, 아니면 불합격
    ///*int Point1 = 0;
    //int Point2 = 0;
    //int Point3 = 0;
    //const int AverageLimit = 60;
    //const int FailLimit = 40;
    //float Average = (Point1 + Point2 + Point3) / 3.0f;
    //std::cin >> Point1 >> Point2 >> Point3;*/
    //printf("수학 점수를 입력해주세요\n");
    //std::cin >> a;
    //printf("국어 점수를 입력해주세요\n");
    //std::cin >> b;
    //printf("영어 점수를 입력해주세요\n");
    //std::cin >> c;
    ////데이터 타입이 int라도  float으로 계산이 진행되어 나온 결과값은 float 타입으로 변환된다.(a + b + c) / 3.0f
    //if ((a >= 40) && (b >= 40) && (c >= 40) && ((a + b + c) / 3.0f >= 60)) {
    //    printf("평균 점수가 %d 이므로 합격입니다.\n", ((a + b + c) / 3));
    //}
    //else {
    //    printf("불합격입니다.\n");
    //}

//3일차
//0을 입력 받을 때까지 입력을 계속 받고 0이 입력되면 입력 받은 숫자의 합을 출력
   // int Sum = 0;
   //int InputNumber = -1;
//    printf("숫자를 입력하세요.\n");
//    std::cin >> InputNumber;
//    for (int i = InputNumber; i != 0; std::cin >> i)
//    {
//        printf("숫자를 입력하세요.\n");
//        Sum = Sum + i;
//    }
//    printf("입력 받은 수의 합은 %d입니다.\n", Sum);
//

//while (InputNumber != 0)
//{
//    std::cin >> InputNumber;
//    Sum += InputNumber; // Sum = Sum + InputNumber;
//}
//printf("입력받은 수의 합은 = %d", Sum);
////// 입력 받은 숫자 구구단 출력
//    int inputmultiple = 0;
//    printf("숫자를 입력하세요.\n");
//    std::cin >> inputmultiple;
//    printf("%d 단\n", inputmultiple);
//    for (int i = 1; i < 10; i++)
//    {
//        int multiple = inputmultiple * i;        
//        printf("%d * %d = %d\n", inputmultiple, i, multiple);
//    }
    
//숫자 하나 입력 받고 해당 수의 범위 안에서의 숫자 중 홀수만 출력
//int InputNum = 0;
//printf("숫자를 입력하세요.\n");
//std::cin >> InputNum;
// InputNum++ // 랙문에서 조건에 <= 쓰기 싫어서 1더함
//printf("입력한 수의 범위 안의 홀수는 ");
//for (int i = 0; i < InputNum + 1; i++)
//{
//    if ((i % 2) != 0)
//    {
//        printf(" %d ", i);
//    }
//    
//}
//printf("입니다.\n");
// 1- 100사이의 숫자 중에 7의 배수만 출력
// const int Min = 0;
// const int Max = 101;
//for (int i = 1; i < 101;i++)
//{
//    if((i % 7) == 0)
//      {
//    printf("%d, ", i);
//      }
//}

//입력 받은 숫자만큼의 층을 가진 피라미드 출력
/*
1. 값을 입력 받아야 한다.
2. *가 1,3,5... 찍힌다 해당 값은 a*2-1 이다.
3. 각층 별로 공백을 (입력값 - (a+1 ))만큼 추가한다.
*/
//int Star = 0;
//printf("숫자를 입력하세요.\n");
//std::cin >> Star;
//for (int i = 0; i < Star; i ++)
//{
//    for (int k = 0; k < Star - i; k++)
//    {
//        printf(" ");
//    }
//    for (int j = 0; j < (i * 2) + 1; j++)
//       { 
//           printf("*");
//       }     
//       printf("\n");
//}
//1. 주사위를 100만번 돌려서 6이 몇번 나왔는지 카운팅해서 출력하기
//const int Count = 1000000;
//int Counting = 0;
//printf("주사위 100만 번 던졌을 때 6이 나온 회수는 ");
//
//for (int i = 0; i < Count; i++)
//{
//
//    int RandomNumber = (rand() % 6) + 1;
//    if ((RandomNumber % 6) == 0)
//    {
//        
//        Counting += 1;
//        //printf("%d", Counting);
//    }    
//}
//printf("%d 입니다.", Counting);
//2. 가위, 바위, 보 게임 만들기
//-   3선승제
//-   enum 활용
//int user = 0;
//int wincount = 0;
//int losecount = 0;
//
//enum game
//{
//    rock, //0b0001
//    scissors, //0b0010
//    paper, //0b0100
//};
//while (true)
//{
//    printf("0-2 사이 수를 입력해주세요.\n");
//  
//    
//    std::cin >> user;
//    int random = (rand() % 3);
//    if (user > 3)
//    {
//        printf("입력값을 벗어났습니다. 다시 입력해주세요\n\n");
//    }
//   
//    if (user == rock && random == rock)
//    {
//        printf("비겼습니다.\n");
//        
//    }
//    else if(user == rock && random == scissors)
//    {
//        printf("이겼습니다.\n");
//        wincount += 1;
//        printf("현재 총 이긴 수는 %d 입니다.\n", wincount);
//        
//    }
//    else if (user == rock && random == paper)
//    {
//        printf("졌습니다.\n");
//        losecount += 1;
//    }
//
//    if (user == scissors && random == rock)
//    {
//        printf("졌습니다.\n");
//        losecount += 1;
//    }
//    else if (user == scissors && random == scissors)
//    {
//        printf("비겼습니다.\n");
//        
//    }
//    else if (user == scissors && random == paper)
//    {
//        printf("이겼습니다.\n");
//        wincount += 1;
//        printf("현재 총 이긴 수는 %d 입니다.\n", wincount);
//        
//    }
//
//    if (user == paper && random == rock)
//    {
//        printf("이겼습니다.\n");
//        wincount += 1;
//        printf("현재 총 이긴 수는 %d 입니다.\n", wincount);
//        
//    }
//    else if (user == paper && random == scissors)
//    {
//        printf("졌습니다.\n");
//        losecount += 1;
//    }
//    else if (user == paper && random == paper)
//    {
//        printf("비겼습니다.\n");
//        
//        
//    }
//    if(wincount == 3)
//    {
//        printf("3승 했으므로 최종 승리하였습니다.\n");
//        break;
//    }
//    else if (losecount == 3)
//    {
//        printf("com이 먼저 3승 했으므로 재승부합니다.\n");
//        wincount = 0;
//        losecount = 0;
//        printf("승수가 %d 으로 초기화되었습니다.\n\n", wincount);
//    }
//    
//}
////3.  하이 로우
////  - 컴퓨터가 1~100 사이의 임의의 숫자를 선택하고,
////    사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
////  - 5번안에 맞춰야 승리
//srand(time(0)); //해당 값은 타입을 적용하는 것이 아님 시작 위치를 임의로 하여 랜덤성을 높이는 기능 이후 rand 로 타입설정을 하여 랜덤 값을 완성하면 됨.
//int UserInput = 0;
//int Count100 = 0;
//int Random100 = (rand() % 100) + 1;
//while(true)
//{
//    
//    printf("1 - 100 사이 수를 찾는 게임입니다.\n 수를 입력하세요.\n");
//    std::cin >> UserInput;   
//    if (UserInput < Random100)
//    {
//        printf("더 높은 수 입니다.\n");
//        Count100 += 1;
//    }
//    
//    else if (UserInput > Random100)
//    {
//        printf("더 낮은 수 입니다.\n");
//        Count100 += 1;
//    }
//    else if (UserInput < 5)
//    {
//        UserInput = 0;
//        Count100 = 0;
//        printf("회수를 초과했습니다. 다시하세요.\n");
//    }
//    else if (UserInput == Random100)
//    {
//        printf("값을 찾았습니다. 정답은 %d 였습니다.\n", Random100);
//        break;
//    }
//}

//4.  공포 게임의 인벤토리를 비트플래그로 표현하기
//  - 아이템 종류를 나타내는 enum을 만들고
//  - 특정 아이템을 추가하고 삭제하는 예시 보여주기

//인벤토리 비트 내용에 따라서 출력
//이미 있는 아이템을 추가하려고하면 메세지 출력 반대도 마찬가지 
int UserItem = 0;


while (true)
{
    std::cin >> UserItem;
    int GetItem = 0;
    int DelItem = 0;
    enum Item
    {
        key = 1,
        Hurb ,
        Light  ,
    };
    if (UserItem == 1)
    {
        printf("무슨 아이템을 얻겠습니까?\n1번 열쇠\n2번 허브\n3번 손전등\n ");
        std::cin >> GetItem;
        if (GetItem  == Item::key)
        {
            if (Item::key != 0b0010)
            {
                printf("아이템을 얻었습니다.");
            }
            
        }
        else if (GetItem == Item::Hurb)
        {

        }
        else if (GetItem  == Item::Light)
        {

        }
        else
        {
            printf("잘못 입력한 키입니다. 다시 입력하세요. ");
        }
    }
    else if (UserItem == 2)
    {
        printf("무슨 아이템을 버리겠습니까?\n1번 열쇠\n2번 허브\n3번 손전등\n");
        std::cin >> DelItem;
        if (GetItem == 1)
        {

        }
        else if (GetItem == 2)
        {

        }
        else if (GetItem == 3)
        {

        }
        else
        {
            printf("잘못 입력한 키입니다. 다시 입력하세요. ");
        }
    }
}

  
/*
주사위 게임 만들기
1. 초기 세팅
플레이어와 컴퓨터 모두 일정 금액(예: 10000원)으로 시작한다.
2. 1차 주사위 굴리기
게임 시작 시, 플레이어와 컴퓨터가 각각 주사위(1~6)를 한 번 굴린다.
각자 주사위 결과를 공개한다.
3. 배팅
이전 판에서 진 쪽이 배팅 금액을 제시한다.
제시한 배팅 금액은 두 사람 모두의 현재 소지 금액 이하이어야 한다.
배팅 금액은 두 사람 모두에게서 차감된다.
4. 2차 주사위 굴리기
다시 플레이어와 컴퓨터가 각각 주사위를 한 번씩 굴린다.
(1차+2차) 주사위의 합을 계산한다.
5. 승패 판정 및 금액 증감
합이 더 큰 쪽이 배팅 금액의 총합(즉, 2×배팅금액)을 모두 가져간다.
동점일 경우 배팅 금액은 그대로 반환한다.
6. 다음 판 진행
소지금이 0 이하인 쪽이 나오면 게임 종료.
*/
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
