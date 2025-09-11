#include <iostream> //입출력 관련
#include <cstdio>  // stdio.h에 네임 스페이스 추가한 래퍼
#include <stdio.h>
#include "header.h"
#include <time.h>
#include <random>
#include "TestMath.h"
#include "Practice.h"
#include "Practice_250909.h"
#include <limits.h>


void PointerParameter(int* pNumber)
{
	(*pNumber) =  (*pNumber) * 2; //입력받은 주소에 있는 int 값을 2배로 만들기
}

void Pointer()
{
	//간단 실습
	//Number라는 변수를 하나 선언 하고 Pointer 변수 p에 Number의 주소 저장
	// p를 이용하여 Number 변수 변경

	int Number = 10;
	int* p = &Number;
	(*p) = 30;

	float Number2 = 123.01f;
	float* p2 = nullptr;  //초기값 nullptr 예전에는 NULL; p는 완전히 비어있다.
	//타입이 다르면 포인터가 안된다.
	p2 = &Number2;
	(*p) = 100.0f;

	PointerParameter(&Number);

	//간단 실습
	//int* 와 float*를 파라메터로 받은 함수 만들기
	//int*로 받은 값은 3더하기, float*로 받은 값은 절반으로 만들기

	TestPointer(&Number, &Number2);

	float* test = p2;
	test++;

	//(*test) = 20; 매우 위험 절대 하면 안됨. 터짐
	int i = 0;
}
void TestPointer(int* pInt, float* pFloat)
{
	(*pInt) += + 3;
	//(*pFloat) = (*pFloat) / 2;
	(*pFloat) *= 0.5f;  //* /중에서 선택 가능한 상황이면 곱하기를 사용하는 게 좋음
}

void Day0909_02()
{
	//배열과 포인터 (기본적으로 같다)
	int Array[5] = { 10,20,30,40,50 };
	int* pArray = Array;	//배열의 이름은 배열의 첫 번째 요소의 주소와 같다.
	int* pArray2 = &Array[0]; // Array == &Array[0]

	//pArray를 이용해서 Array[2]를 300으로 수정
	*(pArray + 2) = 300;

	for (int data : Array) //range-for Array안의 요소들을 순차적으로 하나씩 data에 넣어 처리
	{
		printf("%d ",data);
	}
	printf("\n");


}

void Day0909_DynamicAllocation()
{
	//c 스타일 메모리 할당, 해제
	//int Size = 5;
	//int* Array = nullptr;
	//Array = (int*)malloc(sizeof(int) * Size); //int 5개짜리 메모리 블럭 할당

	//Array[2] = 20;
	///*
	//작업들
	//*/
	//free(Array); //Array를 해제 malloc 했으면 무조건 free부터 만들고 작업할 것
	//Array = nullptr; //댕글링 포인터 방지

	////C++
	//int* Data = new int(5); //int 하나를 할당 받는데 주소가 가르키는 값은 5로 설정해라
	//	delete Data;
	//Data = nullptr;
	//Array = new int[10];// int 10개짜리 배열을 만들어라
	//	delete[] Array; //배열은 반드시 해당 식으로 해제(delete Array; 배열의 1번째만 해제)
	//	Array = nullptr;

	// 간단 실습
	// 1. int 배열 할당받기(첫 할당은 3개만)
	//	int* TestArray = new int[3];
	//// 2. 숫자를 입력받을 때마다 배열에 추가하기
	//	int InputNum = 0;

	//	int ElementCount = ;
	//	int ArrayCount = 0;
	//	int Count = 0;
	//	while (true)
	//	{
	//		
	//		
	//		if (ElementCount == Count )
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			printf("배열에 넣을 수를 입력해주세요.\n");
	//			std::cin >> InputNum;
	//			Count++;
	//			TestArray[ArrayCount] = InputNum;
	//			ArrayCount++;
	//		}

	//		
	//	}
	//	for (int i = 0; i < ElementCount; i++)
	//	{
	//		printf(" %d", TestArray[i]);
	//	}
	//	delete[] TestArray;
	//	TestArray = nullptr;

	const int ExitInput = -1;	// 입력 종료값 or 빈칸 표현값
	const int StartSize = 3;

	int* Array = new int[StartSize];
	for (int i = 0; i < StartSize; i++)
	{
		Array[i] = ExitInput;
	}
	int CurrentIndex = 0;
	int CurrentSize = StartSize;

	int InputNumber = 0;
	while (InputNumber != ExitInput)
	{
		printf("배열에 넣을 숫자를 입력하세요 : ");
		std::cin >> InputNumber;

		Array[CurrentIndex] = InputNumber;
		CurrentIndex++;

		if (CurrentIndex >= CurrentSize)
		{
			int* newArray = new int[CurrentSize + 1];
			for (int i = 0; i < CurrentSize; i++)
			{
				newArray[i] = Array[i];
			}
			newArray[CurrentSize] = ExitInput;
			delete[] Array;
			Array = newArray;
			CurrentSize++;
		}

		printf("입력된 데이터 : ");
		for (int i = 0; i < CurrentSize; i++)
		{
			printf("%d ", Array[i]);
		}
		printf("\n");
	}

	delete[] Array;
	Array = nullptr;

}
//
//void Day0909_Example()
//{
//	const int ExitInput = -1;	// 입력 종료값 or 빈칸 표현값
//	const int StartSize = 3;
//
//	int* Array = new int[StartSize];
//	for (int i = 0; i < StartSize; i++)
//	{
//		Array[i] = ExitInput;
//	}
//	int CurrentIndex = 0;
//	int CurrentSize = StartSize;
//
//	int InputNumber = 0;
//	while (InputNumber != ExitInput)
//	{
//		printf("배열에 넣을 숫자를 입력하세요 : ");
//		std::cin >> InputNumber;
//
//		Array[CurrentIndex] = InputNumber;
//		CurrentIndex++;
//
//		if (CurrentIndex >= CurrentSize)
//		{
//			int* newArray = new int[CurrentSize + 1];
//			for (int i = 0; i < CurrentSize; i++)
//			{
//				newArray[i] = Array[i];
//			}
//			newArray[CurrentSize] = ExitInput;
//			delete[] Array;
//			Array = newArray;
//			CurrentSize++;
//		}
//
//		printf("입력된 데이터 : ");
//		for (int i = 0; i < CurrentSize; i++)
//		{
//			printf("%d ", Array[i]);
//		}
//		printf("\n");
//	}
//
//	delete[] Array;
//	Array = nullptr;
//
//	
//
//}
//
//int RollDice(int FaceNumber)
//{
//	return rand() % FaceNumber + 1;
//}
//
//void Day0908_Practice1()
//{
//	//6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
//	//6면체 주사위를 돌리는 함수 만들기
//
//	const int TestCount = 1000000;
//	int Counters[6] = { 0 };
//	for (int i = 0; i < TestCount; i++)
//	{
//		Counters[RollDice() - 1]++;
//	}
//	printf("최종 결과 : ");
//	for (auto count : Counters)
//	{
//		printf("%d ",count);
//	}
//	printf("\n");
//
//}
//void Reverse(int* Array, int Size)
//{
//	int HalfSize = Size / 2;
//	for (int i = 0; i < HalfSize; i++)
//	{
//		int temp = Array[i];
//		Array[i] = Array[Size - 1 - i];
//		Array[Size - 1 - i] = temp;
//	}
//}
//void Day0908_Practice2()
//{
//	int Array[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	
//
//	printf("Array : ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("\n");
//	Reverse(Array, 10);
//	printf("Array(Reverse) : ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("\n");
//}
//
//void Day0908_Practice3()
//{
//	const int MaxNumber = 45;
//	int Array[45];
//	for (int i = 0; i < 45; i++)
//	{
//		Array[i] = i + 1;
//	}
//
//	Shuffle(Array, MaxNumber);
//	printf("로또 번호는 ");
//	const int PickCount = 6;
//	for (int i = 0; i < PickCount; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("입니다.\n");
//}



int MazeWidth = 20;
int MazeHeight = 10;
int** Maze = nullptr;


void Day0908_MazeEscape()
{
	srand(time(0));
	/*
	*	- 2차원 배열을 활용하여 텍스트 기반 미로 탈출 게임을 구현.
		- 미로의 구성
			- 10행 20열의 2차원 배열
			- 저장 방식
				- 길(0): '. '으로 표시
				- 벽(1): '# '으로 표시
				- 시작점(2): 'S '로 표시
				- 출구(3): 'E '로 표시
			- 미로 코드

				```cpp
				// 미로 크기
				const int MazeRows = 10;
				const int MazeCols = 20;

				// 미로 배열
				int Maze[MazeRows][MazeCols] =
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
				```

		- 이동 입력 처리
			- w(W): 위, s(S): 아래, a(A): 왼쪽, d(D): 오른쪽
			- 대소문자 구분 없이 처리
		- 플레이어가 출구에 도착하면 종료
			- 플레이어는 ‘P ‘로 표시
		- 게임 화면은 다음과 같은 양식을 따른다.

			```cpp
			=== 텍스트 미로 탈출 게임 ===
			[미로 화면 출력]
			이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽):
			w(↑) s(↓) a(←) d(→)
			방향 입력:
			```
	*/
	int UserHp = 100;
	
	int PlayerX = 0;
	int PlayerY = 0;
	FindStartPosition(PlayerX, PlayerY);

	printf("~~ 미로 탈출 게임 ~~\n");

	while (true)
	{
		PrintMaze(PlayerX, PlayerY);
		int InCount = (rand() % 10) + 1;
		if (IsEnd(PlayerX, PlayerY))
		{
			printf("축하합니다! 미로를 탈출했습니다!\n");
			break;
		}

		int MoveFlags = PrintAvailableMoves(PlayerX, PlayerY);
		MoveDirection Direction = GetMoveInput(MoveFlags);
		
		switch (Direction)
		{
		case DirUp:
			PlayerY--;
			break;
		case DirDown:
			PlayerY++;
			break;
		case DirLeft:
			PlayerX--;
			break;
		case DirRight:
			PlayerX++;
			break;
		case DirNone:
		default:
			// 있을 수 없음
			break;
		}

		if (InCount == 1 || InCount == 3)
		{
			RPG(UserHp);
		
			if (UserHp == 0)
			{

				break;	
			}
			
			
		
		}
		else if(InCount == 7)
		{
			printf("체력이 회복되었습니다.\n");
			UserHp *= 3;
		}
		else
		{
			continue;
		}
		
	}

}

void PrintMaze(int PlayerX, int PlayerY)
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (PlayerX == x && PlayerY == y)
			{
				printf("P ");
			}
			else if (Maze[y][x] == Wall)
			{
				printf("# ");
			}
			else if (Maze[y][x] == Path)
			{
				printf(". ");
			}
			else if (Maze[y][x] == Start)
			{
				printf("S ");
			}
			else if (Maze[y][x] == End)
			{
				printf("E ");
			}
			else
			{
				// 절대 들어오면 안되는 곳 == 맵 데이터가 잘못된 것
			}
		}
		printf("\n");
	}
}

void FindStartPosition(int& OutStartX, int& OutStartY)
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (Maze[y][x] == Start)
			{
				OutStartX = x;
				OutStartY = y;
				return;
			}
		}
	}
	OutStartX = 0;
	OutStartY = 0;
}

int PrintAvailableMoves(int PlayerX, int PlayerY)
{
	int MoveFlags = DirNone;
	

	printf("이동할 수 있는 방향을 선택하세요 (w:위 a:왼쪽 s:아래쪽 d:오른쪽):\n");
	if (!IsWall(PlayerX, PlayerY - 1))
	{		
			printf("W(↑) \n");			
			MoveFlags |= DirUp;		
	}
	if (!IsWall(PlayerX, PlayerY + 1))
	{
		
			printf("S(↓) ");
			MoveFlags |= DirDown;
		
	}
	if (!IsWall(PlayerX - 1, PlayerY))
	{
		
			printf("A(←) ");
			MoveFlags |= DirLeft;
		
	}
	if (!IsWall(PlayerX + 1, PlayerY))
	{
		
			printf("D(→) ");
			MoveFlags |= DirRight;
		
	}
	printf("\n");

	return MoveFlags;
}

bool IsWall(int X, int Y)
{
	bool isWall = false;
	if (Y < 0 || Y >= MazeHeight ||
		X < 0 || X >= MazeWidth ||
		Maze[Y][X] == Wall)
		isWall = true;
	return isWall;
}

bool IsEnd(int X, int Y)
{
	return Maze[Y][X] == End;
}

MoveDirection GetMoveInput(int MoveFlags)
{
	char InputChar = 0;
	MoveDirection Direction = DirNone;

	while (true)
	{
		printf("방향을 입력하세요 : ");
		std::cin >> InputChar;

		if ((InputChar == 'w' || InputChar == 'W')
			&& (MoveFlags & DirUp) /*!= 0*/)
		{
			Direction = DirUp;
			break;
		}
		if ((InputChar == 's' || InputChar == 'S')
			&& (MoveFlags & DirDown) /*!= 0*/)
		{
			Direction = DirDown;
			break;
		}
		if ((InputChar == 'a' || InputChar == 'A')
			&& (MoveFlags & DirLeft) /*!= 0*/)
		{
			Direction = DirLeft;
			break;
		}
		if ((InputChar == 'd' || InputChar == 'D')
			&& (MoveFlags & DirRight) /*!= 0*/)
		{
			Direction = DirRight;
			break;
		}

		printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
	}

	return Direction;
}

/*1. 가로 세로를 입력받아 배열을 생성하고 배열의 안을 0부터 1씩 증가하는 값으로 채우고 출력하기
ex) 가로5 세로4
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19*/
void Matrix()
{
	int InputX = 0;
	int InputY = 0;
	int Count = 0;
	printf("배열 행의 수를 입력하세요:  \n");
	std::cin >> InputY;
	printf("배열 열의 수를 입력하세요:  \n");
	std::cin >> InputX;
	
	int* Array = new int[InputX];
	
	for (int i = 0; i < InputX; i++)
	{
		for (int j = 0; j < InputY; j++)
		{
			Array[j] = Count;
			printf(" %d ", Array[j]);
			Count++;
		}
		printf("\n");
	}

	delete[] Array;
	Array = nullptr;
}
//2. 하이로우 수정하기
//게임이 종료되었을 때 이때까지 플레이어가 입력한 모든 수를 출력해서 보여주기

void HighRow()
{
	srand(time(0));
	int UserInput = 0;
	int Random100 = (rand() % 100) + 1;

	int CurrentSize = 0;
	int* Array = new int[CurrentSize];
	int* newArray = new int[CurrentSize + 1];
	while (true)
	{
		
		Array;
		printf("1 - 100 사이 수를 찾는 게임입니다.\n 수를 입력하세요.\n");
		std::cin >> UserInput;
		if (UserInput < Random100)
		{			
			printf("더 높은 수 입니다.\n");
			Array[CurrentSize] = UserInput;
			newArray;
			for (int i = 0; i < CurrentSize + 1; i++)
			{
				newArray[i] = Array[i];
			}	
			
			CurrentSize++;

		}

		else if (UserInput > Random100)
		{
			printf("더 낮은 수 입니다.\n");
			Array[CurrentSize] = UserInput;
			newArray;
			for (int i = 0; i < CurrentSize + 1; i++)
			{
				newArray[i] = Array[i];
			}		
			
			CurrentSize++;
			
			
		}
		else
		{
			printf("값을 찾았습니다. 정답은 %d 였습니다.\n", Random100);	
			CurrentSize++;
			newArray;
			for (int i = 0; i < CurrentSize + 1; i++)
			{
				newArray[i] = Array[i];
			}
			
			newArray[CurrentSize] = UserInput;
			
			
			break;
		}
		
		
	}
	printf("입력된 데이터 : ");
	for (int i = 0; i < CurrentSize; i++)
	{
		printf("%d ", newArray[i]);
	}
	printf("\n");

	delete[] Array;
	Array = nullptr;

}

//3. 9 / 9 심화문제
//미로 탈출 게임 수정하기
//이동했을 때 일정확률(20 %)로 전투가 발생한다.
//이동했을 때 일정확률(10 %)로 플레이어 HP가 회복된다.
//두 이벤트는 중복으로 발생하지 않는다.