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

//���ø� �Լ��� ����� ���� ������ �����ϴ� �� ����

//���ø� �Լ� �����
//1. Min
//�Ķ���� 2��
//���� : �Ķ���� �� ���� �� ����
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
//�Ķ���� 2��
//���� : �Ķ���� �� ū �� ����
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
//�Ķ���� 3��(value, min, max)
//����
//value���� min���� ������ min
//value���� max���� ũ�� max
//value���� min�� max ���̸� value
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

//4. ����Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
//5���丮�� = 5 * 4 * 3 * 2 * 1
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
//	int& Ref = Num; //Num�� ������ Ref��
//
//	TestRef(Num, Num2);
//}

void Day0908_Dice();

void BackArray(int Array[], int Length);

void Lotto();