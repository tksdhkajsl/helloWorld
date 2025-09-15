#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <stdio.h>
#include <string>
#include "Practice_250915.h"
#include "BlackJack.h"
//월별 일수
int TotalDaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

//""는 무조건 const 설정해야 함. 요일
const char* Week[7] = { "월요일","화요일","수요일","목요일","금요일","토요일","일요일" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
	
	int TotalDays = TotalGetTotalDays(Year, Month, Day);
	return Week[TotalDays % 7];
}

bool IsLeap(int Year)
{
	//4의 배수는 윤년이다. 그리고 100의 배수는 윤년이 아니다.
	// 그런데 400의 배수는 윤년이다.
	//Year % 4 == 0 : 4의 배수는 윤년이다.
	//(Year % 100) != 0 : 100의 배수가 아니다. -> 윤년
	//(Year % 400) == 0 : 400의 배수는 윤년이다.

	//
	// 4의 배수이고 100의 배수가 아니거나, 400의 배수면 윤년이다.
	return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
	
}

int TotalGetTotalDays(int Year, int Month, int Day)
{
	int TotalDays = 0;

	for (int y = 1; y < Year; y++)
	{
		//삼항 연산자
		TotalDays += (IsLeap(y) ? 366 : 365); //윤년이면 366, 아니면 365cnrk
	}
	for (int m = 1; m < Month; m++)
	{
		TotalDays += TotalDaysInMonth[m - 1];
		if (m == 2 && IsLeap(Year))
		{

			TotalDays += 1;//윤년이면 1일 추가
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
	printf("날짜를 입력 하세요(예: 2025 9 15) : ");
	std::cin >> Year >> Month >> Day;
	printf("해당 날짜는 [%s]입니다.\n", GetDayOfWeek(Year, Month, Day));

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
		printf("(%d/%d/%d)는 [%s]입니다.\n", Year, Month, Day, GetDayOfWeek(Year, Month, Day));
	}


}


//void Day0915_WeekPracticeBlackJackTest()
//{
//	//'♠', '♡', '◇', '♣'
//	Card Dealer[5] = { {10, 'S'}, {11, 'S'}, {1,'S'}, {5,'S'}, {3,'S'} };
//	PrintDealerHand(Dealer, 5, true);
//	printf("\n");
//	PrintDealerHand(Dealer,5,false);
//}