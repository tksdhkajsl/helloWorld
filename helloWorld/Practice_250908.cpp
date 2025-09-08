#include "Practice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>

void Day0908_casting()
{
	//Cast
	//int a = 10;
	//float b = 15.5f;

	//a = (int)b;//b를 int로 캐스팅해서 a에 대입한다.(C스타일 명시적 캐스팅)
	//a = b;	//b를 a에 대입한다. 그런데 a와 b는 타입이 다르니까 b를 a로 임시적으로 캐스팅 대입(암시적 캐스팅)
	//b = a; //암시적 캐스팅은 대체로 표현이 작은 쪽에서 큰쪽으로는 문제없는 경우가 많다.

	////C++ 캐스팅
	////static_cast : C스타일 캐스팅을 안전하게 만든 것. 컴파일 타임에 결정됨.
	////dynamic_cast 클래스
	////const_cast : const 속성 제거하거나 추가하는데 사용. 사용하지 않는 것이 권장. 오래된 코드에서 사용
	////reinterpret_cast : C스타일 캐스팅에서 위험한 부분. 원래 타입의 구조를 무시하고 새 타입으로 해석하게 한다.

	//a = static_cast<int>(b); //b를 int형으로 캐스팅해서 a에 대입(명시적 캐스팅 C++)
}



//1. 배역의 마지막 요소에서 첫 요소까지 순회
//2. 현재 요소의 인덱스(I)와 0 ~i 중 임의의 인덱스(j)를 선택한다.
//3. i번째 와 j번째 요소를 서로 교환
//4. i가 0이 될 때까지 반복 return X
void Shuffle(int Array[], int Length)
{
	/*for (int i = Length - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		int Temp = Array[i];
		Array[i] = Array[j];
		Array[j] = Temp;
	}*/

}

//1. 6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
//6면체 주사위를 돌리는 함수 만들기
void Day0908_Dice()
{
	srand(time(0));
	int Dice[6] = {0};
	int DiceNum = 1000000;	
	
	for (int i = 0; i < DiceNum; i++)
	{
		int Random = rand() % 6;
		switch (Random)
		{
		case 0:	
			Dice[0] += 1;
			break;
		case 1:
			Dice[1] += 1;
			break;
		case 2:			
			Dice[2] += 1;
			break;
		case 3:
			Dice[3] += 1;
			break;
		case 4:
			Dice[4] += 1;
			break;
		case 5:
			Dice[5] += 1;
			break;
		default:
			break;
		}
	}
	for (int i = 0;i < 6; i++)
	{
		printf("주사위 %d 나온 회수 %d 회\n",i + 1, Dice[i]);
	}
	
	
	
}
//2. 배열에 저장된 값을 거꾸로 뒤집는 함수 만들기
//파라메터 int Array[], int Size
void BackArray(int Array[], int Size)
{
	
	for (int i = 0; i < Size/2; i++)
	{
		    int Temp = Array[i];
			Array[i] = Array[Size - i - 1];
			Array[Size - i - 1] = Temp;	
		
	}
	
	for (int j = 0; j < Size; j++)
	{
		printf("%d번째 %d\n", j + 1, Array[j]);
	}	
	
	
}

//3. 로또 번호 생성기
//전체 숫자 범위 : 1번부터 45번까지.
//맞춰야 하는 숫자 개수 : 6개.
void Lotto()
{
	srand(time(0));
	
	int Result[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		int LottoNum = (rand() % 45) + 1;
		Result[i] = LottoNum;
		for (int j = 0; j < i; j++)
		{
			if (Result[i] == Result[j])
			{
				i--;
			}
				
		}
	}
	printf("나온 로또 번호 : ");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d ", Result[i]);
	}
}

//심화 미로 탈출 게임 만들기

//2차원 배열을 활용하여 텍스트 기반 미로 탈출 게임을 구현.
//미로의 구성
//10행 20열의 2차원 배열
//저장 방식
//길(0) : '. '으로 표시
//벽(1) : '# '으로 표시
//시작점(2) : 'S '로 표시
//출구(3) : 'E '로 표시
//미로 코드

// 미로 크기
const int MazeHeight = 10;
const int MazeWidth = 20;

// 미로 배열
int Maze[MazeHeight][MazeWidth] =
{
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
	{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
	{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
	{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
	{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
	{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
	{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

//이동 입력 처리
//w(W) : 위, s(S) : 아래, a(A) : 왼쪽, d(D) : 오른쪽
//대소문자 구분 없이 처리
//플레이어가 출구에 도착하면 종료
//플레이어는 ‘P ‘로 표시
//게임 화면은 다음과 같은 양식을 따른다.
//
