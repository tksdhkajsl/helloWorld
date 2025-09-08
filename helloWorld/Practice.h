#pragma once
#include <random>

void Practice0905_01();
int Range(int Min, int Max);

void Practice0905_02();

void Practice0905_03();
float CircleArea(float CircleHalf);

void Practice0905_04();
bool OddnEven(int Num);

void Practice0905_05();
int GradePoint(int Point);

void Practice0905_06();
int AddItem(int Inventory, int Flag);
int ClearItem(int Inventory, int Flag);
int ToggleItem(int Inventory, int Flag);

enum Item
{
	Fuse = 1 << 0,
	Light = 1 << 1,
	Book = 1 << 2,
	Key = 1 << 3
};
void Practice0905_07(int Star);
int Pyramid(int Star);

//템플릿 함수는 헤더에 리턴 값까지 설정하는 게 좋다

//탬플릿 함수 만들기
//1. Min
//파라메터 2개
//리턴 : 파라메터 중 작은 수 리턴
template<typename T>
T Min(T Number1, T Number2)
{
	
	if (Number1 < Number2)
	{
		return Number1;
	}
	else if (Number1 > Number2)
	{
		return Number2;
	}
}


//2. Max
//파라메터 2개
//리턴 : 파라메터 중 큰 수 리턴
template<typename T>
T Max(T Number1, T Number2)
{

	if (Number1 > Number2)
	{
		return Number1;
	}
	else if (Number1 < Number2)
	{
		return Number2;
	}
}


//3. Clamp
//파라메터 3개(value, min, max)
//리턴
//value값이 min보다 작으면 min
//value값이 max보다 크면 max
//value값이 min과 max 사이면 value
void Practice0905_09();


template<typename T>
T Clamp (const T& Value, const T& Min,const T& Max)
{

	if (Value >= Min && Value <= Max)
	{
		return Value;
	}
	else if (Value > Max)
	{
		return Max;
	}
	else if (Value < Min)
	{
		return Min;
	}
}

//4. 재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
//5팩토리얼 = 5 * 4 * 3 * 2 * 1
int Factorial(int Num);

float Average(float Num1, float Num2, float Num3);

int SalePrice(int Price, int Sale);

void DiceResult();

int PointGrade(int Point);

void SlotMachine();

void RPG();

void Card();

void  DigitNum();

void Day0908_casting();

void Shuffle(int Array[], int Length);

//void TestRef(int& OutData, const int ReadData)
//{
//	OutData *= 2;
//	//ReadData = 10;
//}
//
//void Day0908_Ref()
//{
//	int Num = 10;
//	int Num2 = 20;
//	int& Ref = Num; //Num의 참조는 Ref다
//
//	TestRef(Num, Num2);
//}

void Day0908_Dice();

void BackArray(int Array[], int Length);

void Lotto();