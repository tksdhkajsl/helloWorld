////#pragma once
////
////
//////1. ##요일 구하기
//////1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠이 지났는지 계산한 후, 7로 나눈 나머지로 요일을 구하기.
//////윤년도 올바르게 처리할 것
//////입력받은 연, 월, 일을 기준으로 요일을 출력.
//
////윤년 계산
//int LeapYear(int Year);
//
////요일 계산
//void Date(int Year, int Month, int Day);
//
//struct Card
//{
//	int Number;
//	char Shape;
//};
//
//struct CPlayer
//{
//	int Cash = 10000;
//	int Score = 0;
//	struct Card Card_Player[21];
//};
//
//
//
////카드 섞는 함수
//void Shuffle();
//
//
////카드 채우는 함수
//void FillDeck();
//
//// 사용자가 뽑은 카드를 문자열이 아닌 카드 모양으로 출력, 점수 계산
//void PrintCard(int Point, int Turns);
//
////게임 작용
//void StayorHit(int Play, int Turns);
//
////딜러 AI
//void Dealer(int Turns);
//
////배팅하는 함수
//int Betting(CPlayer P);
//
////게임실행
//void Play();