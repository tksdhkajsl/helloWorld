#include "Practice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>
//1 특정 범위안의 랜덤한 수를 리턴
/*	int 파라메터 2개
	int 리턴*/
void Practice0905_01()
{
	int Max = 0;
	int Min = 0;
	printf("범위 값을 지정해 주세요\n 최소값\n");
	std::cin >> Min;
	printf("최대값\n");
	std::cin >> Max;

	int Random = Range(Min, Max);
	printf("최대값 %d과 최소값 %d 사이 나온 임의 값은 %d 입니다.\n",Max,Min,Random);

}

int Range(int Min, int Max)
{
	srand(time(0));
	int Random = (rand() % (Max - Min + 1)) + Min;

	return Random;
}

//2. 나이를 입력 -> 나이 출력
/*
 int 파라메터 1개
*/
void Practice0905_02()
{
	int Age = 0;
	printf("나이를 입력해주세요\n");
	std::cin >> Age;

	printf("당신의 나이는 %d 세 입니다.\n",Age);

}



//3.원의 반지름을 입력 받고 넓이 구하기
/*
* float파라메터 1개
  float리턴
*/
void Practice0905_03()
{
	float OneHalf = 0.0f;
	printf("원의 반지름을 입력해주세요\n");
	std::cin >> OneHalf;

	float Circle = CircleArea(OneHalf);

	printf("원의 반지름을 넓이는 %f 입니다.\n",Circle);
}

float CircleArea(float CircleHalf)
{
	float Circle = CircleHalf * CircleHalf * 3.141592f;

	return Circle;
}


//4. 숫자를 입력받아 홀수 짝수 구분 함수
	/*- int파라메터 1개
	-bool 리턴(true 홀수, false 짝수)*/
void Practice0905_04()
{
	int Number = 0;
	printf("숫자를 입력해주세요\n");
	std::cin >> Number;
	

	int Result = OddnEven(Number);	

	if (Result == true)
	{
		printf("숫자 %d는 홀수\n",Number);
	}
	else
	{
		printf("숫자 %d는 짝수\n", Number);
	}
}

bool OddnEven(int Num)
{
	
	if ((Num % 2) == 1)
	{
		return	true;
	}
	else
	{
		return	false;
	}
	 
}


/*5. 성적 분류 함수(A-F)
int 파라메터 1개
int 리턴(enum 값)
*/
void Practice0905_05()
{
	int Point = 0;
	printf("점수를 입력해주세요\n");
	std::cin >> Point;

	int Grade = GradePoint(Point);
	switch (Grade)
	{
	case 0:
		printf("당신의 점수는 %d이므로 A학점입니다.\n", Point);;
		break;
	case 1:
		printf("당신의 점수는 %d이므로 B학점입니다.\n", Point);
		break;
	case 2:
		printf("당신의 점수는 %d이므로 C학점입니다.\n",Point);
		break;
	case 3:
		printf("당신의 점수는 %d이므로 D학점입니다.\n", Point);
		break;
	case 4:
		printf("당신의 점수는 %d이므로 F학점입니다.\n", Point);
		break;
	}
}

int GradePoint(int Point)
{
	enum Grade
	{
		A,
		B,
		C,
		D,
		F
	};

	if (Point >= 90)
	{
		return Grade::A;
	}
	else if (Point >= 80)
	{
		return Grade::B;
	}
	else if (Point >= 70)
	{
		return Grade::C;
	}
	else if (Point >= 60)
	{
		return Grade::D;
	}
	else
	{
		return Grade::F;
	}
}
/*
 6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
비트 플래그 인벤토리 코드 수정
int 파라메터 두개(Inventory, 비트플래그용 enum)
*/
/*
enum Item
{
	Fuse = 1 << 0, 0b0001
	Light = 1 << 1,0b0010
	Book = 1 << 2,0b0100
	Key = 1 << 3 0b1000
};
*/

void Practice0905_06()
{
	int MyInventory = 0;
	MyInventory = AddItem(MyInventory, Fuse);	
	printf("%d\n",MyInventory);
	MyInventory = ClearItem(MyInventory, Fuse);	
	printf("%d\n",MyInventory);
	
}

int AddItem(int Inventory, int Flag)
{
	Inventory |= Flag;
	return Inventory;
	
}

int ClearItem(int Inventory, int Flag)
{
	Inventory &= ~Flag;
	return Inventory;
}

int ToggleItem(int Inventory, int Flag)
{
	Inventory ;
	return Inventory;
}

/*
7. 피라미드 출력 함수
int 파라메터 1개
*/
void Practice0905_07(int Star)
{
	for (int i = 0; i < Star; i++)
	{
		for (int j = 0; j < (Star - (i + 1)); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2 + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}



//탬플릿 함수 만들기
//1. Min
//파라메터 2개
//리턴 : 파라메터 중 작은 수 리턴



//2. Max
//파라메터 2개
//리턴 : 파라메터 중 큰 수 리턴



//3. Clamp
//파라메터 3개(value, min, max)
//리턴
//value값이 min보다 작으면 min
//value값이 max보다 크면 max
//value값이 min과 max 사이면 value


//4. 재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
//5팩토리얼 = 5 * 4 * 3 * 2 * 1