#include <iostream> //����� ����
#include <cstdio>  // stdio.h�� ���� �����̽� �߰��� ����
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
	(*pNumber) =  (*pNumber) * 2; //�Է¹��� �ּҿ� �ִ� int ���� 2��� �����
}

void Pointer()
{
	//���� �ǽ�
	//Number��� ������ �ϳ� ���� �ϰ� Pointer ���� p�� Number�� �ּ� ����
	// p�� �̿��Ͽ� Number ���� ����

	int Number = 10;
	int* p = &Number;
	(*p) = 30;

	float Number2 = 123.01f;
	float* p2 = nullptr;  //�ʱⰪ nullptr �������� NULL; p�� ������ ����ִ�.
	//Ÿ���� �ٸ��� �����Ͱ� �ȵȴ�.
	p2 = &Number2;
	(*p) = 100.0f;

	PointerParameter(&Number);

	//���� �ǽ�
	//int* �� float*�� �Ķ���ͷ� ���� �Լ� �����
	//int*�� ���� ���� 3���ϱ�, float*�� ���� ���� �������� �����

	TestPointer(&Number, &Number2);

	float* test = p2;
	test++;

	//(*test) = 20; �ſ� ���� ���� �ϸ� �ȵ�. ����
	int i = 0;
}
void TestPointer(int* pInt, float* pFloat)
{
	(*pInt) += + 3;
	//(*pFloat) = (*pFloat) / 2;
	(*pFloat) *= 0.5f;  //* /�߿��� ���� ������ ��Ȳ�̸� ���ϱ⸦ ����ϴ� �� ����
}

void Day0909_02()
{
	//�迭�� ������ (�⺻������ ����)
	int Array[5] = { 10,20,30,40,50 };
	int* pArray = Array;	//�迭�� �̸��� �迭�� ù ��° ����� �ּҿ� ����.
	int* pArray2 = &Array[0]; // Array == &Array[0]

	//pArray�� �̿��ؼ� Array[2]�� 300���� ����
	*(pArray + 2) = 300;

	for (int data : Array) //range-for Array���� ��ҵ��� ���������� �ϳ��� data�� �־� ó��
	{
		printf("%d ",data);
	}
	printf("\n");


}

void Day0909_DynamicAllocation()
{
	//c ��Ÿ�� �޸� �Ҵ�, ����
	//int Size = 5;
	//int* Array = nullptr;
	//Array = (int*)malloc(sizeof(int) * Size); //int 5��¥�� �޸� �� �Ҵ�

	//Array[2] = 20;
	///*
	//�۾���
	//*/
	//free(Array); //Array�� ���� malloc ������ ������ free���� ����� �۾��� ��
	//Array = nullptr; //��۸� ������ ����

	////C++
	//int* Data = new int(5); //int �ϳ��� �Ҵ� �޴µ� �ּҰ� ����Ű�� ���� 5�� �����ض�
	//	delete Data;
	//Data = nullptr;
	//Array = new int[10];// int 10��¥�� �迭�� ������
	//	delete[] Array; //�迭�� �ݵ�� �ش� ������ ����(delete Array; �迭�� 1��°�� ����)
	//	Array = nullptr;

	// ���� �ǽ�
	// 1. int �迭 �Ҵ�ޱ�(ù �Ҵ��� 3����)
	//	int* TestArray = new int[3];
	//// 2. ���ڸ� �Է¹��� ������ �迭�� �߰��ϱ�
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
	//			printf("�迭�� ���� ���� �Է����ּ���.\n");
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

	const int ExitInput = -1;	// �Է� ���ᰪ or ��ĭ ǥ����
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
		printf("�迭�� ���� ���ڸ� �Է��ϼ��� : ");
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

		printf("�Էµ� ������ : ");
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
//	const int ExitInput = -1;	// �Է� ���ᰪ or ��ĭ ǥ����
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
//		printf("�迭�� ���� ���ڸ� �Է��ϼ��� : ");
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
//		printf("�Էµ� ������ : ");
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
//	//6��ü �ֻ����� 100���� ������ �� ���� ���� ��� ���Դ��� ī�����ϱ�
//	//6��ü �ֻ����� ������ �Լ� �����
//
//	const int TestCount = 1000000;
//	int Counters[6] = { 0 };
//	for (int i = 0; i < TestCount; i++)
//	{
//		Counters[RollDice() - 1]++;
//	}
//	printf("���� ��� : ");
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
//	printf("�ζ� ��ȣ�� ");
//	const int PickCount = 6;
//	for (int i = 0; i < PickCount; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("�Դϴ�.\n");
//}



int MazeWidth = 20;
int MazeHeight = 10;
int** Maze = nullptr;


void Day0908_MazeEscape()
{
	srand(time(0));
	/*
	*	- 2���� �迭�� Ȱ���Ͽ� �ؽ�Ʈ ��� �̷� Ż�� ������ ����.
		- �̷��� ����
			- 10�� 20���� 2���� �迭
			- ���� ���
				- ��(0): '. '���� ǥ��
				- ��(1): '# '���� ǥ��
				- ������(2): 'S '�� ǥ��
				- �ⱸ(3): 'E '�� ǥ��
			- �̷� �ڵ�

				```cpp
				// �̷� ũ��
				const int MazeRows = 10;
				const int MazeCols = 20;

				// �̷� �迭
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

		- �̵� �Է� ó��
			- w(W): ��, s(S): �Ʒ�, a(A): ����, d(D): ������
			- ��ҹ��� ���� ���� ó��
		- �÷��̾ �ⱸ�� �����ϸ� ����
			- �÷��̾�� ��P ���� ǥ��
		- ���� ȭ���� ������ ���� ����� ������.

			```cpp
			=== �ؽ�Ʈ �̷� Ż�� ���� ===
			[�̷� ȭ�� ���]
			�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������):
			w(��) s(��) a(��) d(��)
			���� �Է�:
			```
	*/
	int UserHp = 100;
	
	int PlayerX = 0;
	int PlayerY = 0;
	FindStartPosition(PlayerX, PlayerY);

	printf("~~ �̷� Ż�� ���� ~~\n");

	while (true)
	{
		PrintMaze(PlayerX, PlayerY);
		int InCount = (rand() % 10) + 1;
		if (IsEnd(PlayerX, PlayerY))
		{
			printf("�����մϴ�! �̷θ� Ż���߽��ϴ�!\n");
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
			// ���� �� ����
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
			printf("ü���� ȸ���Ǿ����ϴ�.\n");
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
				// ���� ������ �ȵǴ� �� == �� �����Ͱ� �߸��� ��
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
	

	printf("�̵��� �� �ִ� ������ �����ϼ��� (w:�� a:���� s:�Ʒ��� d:������):\n");
	if (!IsWall(PlayerX, PlayerY - 1))
	{		
			printf("W(��) \n");			
			MoveFlags |= DirUp;		
	}
	if (!IsWall(PlayerX, PlayerY + 1))
	{
		
			printf("S(��) ");
			MoveFlags |= DirDown;
		
	}
	if (!IsWall(PlayerX - 1, PlayerY))
	{
		
			printf("A(��) ");
			MoveFlags |= DirLeft;
		
	}
	if (!IsWall(PlayerX + 1, PlayerY))
	{
		
			printf("D(��) ");
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
		printf("������ �Է��ϼ��� : ");
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

		printf("�߸��� �Է��Դϴ�. �̵��� �� �ִ� ���� �߿��� �����ϼ���.\n");
	}

	return Direction;
}

/*1. ���� ���θ� �Է¹޾� �迭�� �����ϰ� �迭�� ���� 0���� 1�� �����ϴ� ������ ä��� ����ϱ�
ex) ����5 ����4
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19*/
void Matrix()
{
	int InputX = 0;
	int InputY = 0;
	int Count = 0;
	printf("�迭 ���� ���� �Է��ϼ���:  \n");
	std::cin >> InputY;
	printf("�迭 ���� ���� �Է��ϼ���:  \n");
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
//2. ���̷ο� �����ϱ�
//������ ����Ǿ��� �� �̶����� �÷��̾ �Է��� ��� ���� ����ؼ� �����ֱ�

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
		printf("1 - 100 ���� ���� ã�� �����Դϴ�.\n ���� �Է��ϼ���.\n");
		std::cin >> UserInput;
		if (UserInput < Random100)
		{			
			printf("�� ���� �� �Դϴ�.\n");
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
			printf("�� ���� �� �Դϴ�.\n");
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
			printf("���� ã�ҽ��ϴ�. ������ %d �����ϴ�.\n", Random100);	
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
	printf("�Էµ� ������ : ");
	for (int i = 0; i < CurrentSize; i++)
	{
		printf("%d ", newArray[i]);
	}
	printf("\n");

	delete[] Array;
	Array = nullptr;

}

//3. 9 / 9 ��ȭ����
//�̷� Ż�� ���� �����ϱ�
//�̵����� �� ����Ȯ��(20 %)�� ������ �߻��Ѵ�.
//�̵����� �� ����Ȯ��(10 %)�� �÷��̾� HP�� ȸ���ȴ�.
//�� �̺�Ʈ�� �ߺ����� �߻����� �ʴ´�.