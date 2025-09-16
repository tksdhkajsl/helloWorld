#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <stdio.h>
#include <string>
#include "Practice_250915.h"
#include "BlackJack.h"
//���� �ϼ�
int TotalDaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

//""�� ������ const �����ؾ� ��. ����
const char* Week[7] = { "������","ȭ����","������","�����","�ݿ���","�����","�Ͽ���" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
	
	int TotalDays = TotalGetTotalDays(Year, Month, Day);
	return Week[TotalDays % 7];
}

bool IsLeap(int Year)
{
	//4�� ����� �����̴�. �׸��� 100�� ����� ������ �ƴϴ�.
	// �׷��� 400�� ����� �����̴�.
	//Year % 4 == 0 : 4�� ����� �����̴�.
	//(Year % 100) != 0 : 100�� ����� �ƴϴ�. -> ����
	//(Year % 400) == 0 : 400�� ����� �����̴�.

	//
	// 4�� ����̰� 100�� ����� �ƴϰų�, 400�� ����� �����̴�.
	return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
	
}

int TotalGetTotalDays(int Year, int Month, int Day)
{
	int TotalDays = 0;

	for (int y = 1; y < Year; y++)
	{
		//���� ������
		TotalDays += (IsLeap(y) ? 366 : 365); //�����̸� 366, �ƴϸ� 365cnrk
	}
	for (int m = 1; m < Month; m++)
	{
		TotalDays += TotalDaysInMonth[m - 1];
		if (m == 2 && IsLeap(Year))
		{

			TotalDays += 1;//�����̸� 1�� �߰�
		}
		
	}
	TotalDays += (Day - 1);

	return TotalDays;
}

void Day0915_WeekPractice()
{
	int Year = 0;
	int	Month = 0;
	int	Day = 0;
	printf("��¥�� �Է� �ϼ���(��: 2025 9 15) : ");
	std::cin >> Year >> Month >> Day;
	printf("�ش� ��¥�� [%s]�Դϴ�.\n", GetDayOfWeek(Year, Month, Day));

}

void Day0915_WeekPracticeTest()
{
	int Year = 2025;
	int Month = 11;
	int Day = 1;
	Month = 9;
	for (int i = 1; i < 31; i++)
	{
		Day = i;
		printf("(%d/%d/%d)�� [%s]�Դϴ�.\n", Year, Month, Day, GetDayOfWeek(Year, Month, Day));
	}


}


//void Day0915_WeekPracticeBlackJackTest()
//{
//	//'��', '��', '��', '��'
//	Card Dealer[5] = { {10, 'S'}, {11, 'S'}, {1,'S'}, {5,'S'}, {3,'S'} };
//	PrintDealerHand(Dealer, 5, true);
//	printf("\n");
//	PrintDealerHand(Dealer,5,false);
//}