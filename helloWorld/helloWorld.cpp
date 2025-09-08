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
#include <time.h>
#include <random>
#include "TestMath.h"
#include "Practice.h"
#include <limits.h>

//using namespace std;
//
//int Number = Sum(1, 7); //Sum 함수를 호출했다. 파라메터로 1과 7을 넘겼다. 그리고 8을 돌려 받았다.
//
//Number = Multiply(2, 3);
//Number = Multiply(7);
//
//Number = Sub(5, 4);
//Number = Divide(12, 4);
//
///*
//재귀호출(Recurcive Call)
//	-함수 안에서 자기자신을 다시 호출하는 함수
//*/
///*
//템플릿(template) 함수
//	- 데이터 타입에 관계 없이 동일한 로직을 여러 자료형에 대해 사용할 수 있게 해주는 C++ 기능
//	- 컴파일 타임(빌드 시간)에 실제 사용하는 곳이 있으면 해당 타입으로 코드 생성한다.
//	->해더에 선언과 구현이 함께 있어야 한다.
//	런 타임(실행 시간)
//*/
//
///*
//인라인(Inline) 함수
//	- 함수 호출문을 해당 함수의 실체 코드로 대체하는 함수
//*/
///*
//스코프(Scorp)
//	- 변수,함수, 객체 등이 유효하게 사용할 수 있는 범위
//	- 일반적으로 선언된 중괄호 안쪽에서만 유효
//	- 지역 변수 : 특정 함수 내에서 선언된 변수
//	- 전역 변수 : 프로그램 전체에서 사용할 수 있는 변수
//*/
////TestRecurcive(5);
////
////float Number2 = Add(10.5f, 20.4f);
////
////int Number3 = Square(2);
////int Number3 = Number * Number;
////
////getchar();
////getchar();
//
//return 0;
//

	/*
	배열(Array)(선형자료구조)
		- 같은 데이터 타입을 가진 요소들이 연속적으로 저장되어 있는 데이터 구조
		- 장점 : 빠르게 각 요소에 접근이 가능
		- 단점 : 크기가 고정이다. 중간에 데이터 삽입/삭제가 어렵다.
	*/

	/*
	캐스팅(Casting)
		- 하나의 타입을 다른 데이터 타입으로 변경하는 것

	*/
int main() //엔트리 포인트 : 코드가 시작되는 곳
{
	/*Practice0905_01();
	Practice0905_02();*/
	
	/*float Value = Clamp(5.2f, 7.3f, 8.0f);
	printf("%.2f", Value);*/
	/*DiceResult();

	PointGrade(88);
	

	int Value = SalePrice(43000,50);
	printf("%d", Value);*/
	//int a = 10;
	//int Array[5]; //int 5개를 관리하는 배열
	//Array[0] = 10; //배열의 첫 번째 요소에 10을 대입한다.
	//Array[3] = 40; //배열의 4 번째 요소에 40을 대입한다.

	//int Array2[5] = { 1,2,3,4,5 };
	//int Array3[5] = { 1,2,3 };

	//int Array4[5] = {};
	//const int Size = 5;
	//int Array5[Size] = {};
	//sizeof(Array5); //Array5의 전체 바이트 크기를 알수 있다.
	//sizeof(Array5[0]); //Array5의 요소 하나의 크기를 알 수 있다.
	//int ElementCount = sizeof(Array5) / sizeof(Array5[0]); //배열 요소의 개수
	//int Size2 = 5;
	// int Array6[Size2] = {}; 배열 선언할 때 크기를 변수로 지정할 수 없다.
	//Array[5] = 60; //원래는 터짐 버퍼오버런 ,배열 영역 밖을 접근하려고 하기 때문에 에러 발생 //키워드 문법적으로 이미 정해진 것
	// 간단 실습
	//1. 배열을 만들고 초기화 해보기
	//int Numbers[3] = { 23,4,5 };

	////2. 배열의 모든 요소의 값을 더하고 평균 구하기
	//int Array[5] = { 1,2,3,4,5 };
	//float ArrayAverage = 0.0f;
	//int ArraySum = 0;
	//int ArrayCount = static_cast<int>(sizeof(Numbers) / sizeof(Numbers[0]));
	//for (int i = 0; i <ArrayCount; i++)
	//{
	//	ArraySum += Numbers[i];		
	//}
	//ArrayAverage = ArraySum/static_cast<float>(ArrayCount);
	//printf("배열의 모든 요소 더한 값은 %d 이고 평균은 %.2f이다.\n", ArraySum, ArrayAverage);
	////3. 배열의 모든 요소 중 최대값과 최소값 구하기
	//int MaxNumber = INT_MIN;
	//int MinNumber = INT_MAX;
	//for (int i = 0; i < ArrayCount; i++)
	//{
	//	if (MaxNumber < Numbers[i])
	//	{

	//		MaxNumber = Numbers[i];
	//	}
	//	if (MinNumber > Numbers[i])
	//	{
	//		MinNumber = Numbers[i];
	//	}
	//}

	/*
	이차원 배열 
		- 배열을 이차원으로 표현한 것
		- int Array[4][3] = { {1,2,3},{4,5,6},{7,8,9},{0,1,2} };
		int 3개 짜리 배열이 4줄 들어있다.
		사실 int Array[12] 랑 메모리 구조가 같다.
	*/
	//int Array7[4][3] = { {1,2,3},{4,5,6},{7,8,9},{0,1,2} };
	//int test = Array7[1][2]; //test = 6
	//int Array8[12] = { 1,2,3,4,5,6,7,8,9,0,1,2 };
	
	/*int Array9[9] = { 1,2,3,4,5,6,7,8,9 };
	BackArray(Array9,9);*/
	

	/*
	피셔-에이츠 알고리즘
		- 배역의 내용을 랜덤하게 겄는 셔플 알고리즘
		- 동일한 확률로 섞이도록 증명 완료된 알고리즘

		- 알고리즘 순서
			1. 배역의 마지막 요소에서 첫 요소까지 순회
			2. 현재 요소의 인덱스(I)와 0 ~ i 중 임의의 인덱스(j)를 선택한다.
			3. i번째 와 j번째 요소를 서로 교환
			4. i가 0이 될 때까지 반복
	*/
	/*Day0908_Dice();*/
	/*
	참조(Referance)
		- 변수에 별명
		- 참조를 변경할 경우 원본 변수고 함께 수정이 된다. -> 함수 파라메터로 사용하면 편리
		- 참조는 항상 어떤 변수와 연결되어 있어야 함.
		함수 파라메터에 참조를 사용할 때
			-파라메터 값을 수정하는 출력용 파라메터일 경우 out이라는 접두사를 붙이는 것이 관례
			= 파라메터 값을 읽기만 하는 경우에는 const 붙여줘서 실수로라도 고쳐지지 않게 한다.
	*/

	RPG();

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
