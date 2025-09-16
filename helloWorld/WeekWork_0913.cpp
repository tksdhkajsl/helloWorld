//
//#include <fstream>
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include "Practice_250910.h"
//#include "Practice_250911.h"
//#include "Practice_250909.h"
//#include "Practice_250912.h"
//#include "WeekWork_0913.h"
////
//////1. ##요일 구하기
//////1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠이 지났는지 계산한 후, 7로 나눈 나머지로 요일을 구하기.
//////윤년도 올바르게 처리할 것
//////입력받은 연, 월, 일을 기준으로 요일을 출력.
//int LeapYear(int Year)
//{
//	if ((Year != 0) && (Year % 4) == 0 && ((Year % 400) == 0 || (Year % 100) != 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//void Date(int Year, int Month, int Day)
//{
//	const char* Days[7] = { "일요일", "월요일","화요일","수요일","목요일","금요일","토요일" };
//	int Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int Index = 0;
//	int Count = 0;
//	int SumDay = 0;
//
//	//종합일수
//	while (Count != Year)
//	{
//		Count++;
//		if (LeapYear(Count - 1) == 1)
//		{
//
//		}
//		else
//		{
//			Index++;
//		}
//	}
//	for (int i = 0; i < (Month - 1); i++)
//	{
//		SumDay += Months[i];
//	}
//	if ((Month >= 3) && (LeapYear(Year) == 1))
//	{
//		SumDay += Day + Index;
//	}
//	else
//	{
//		SumDay += Day + Index - 1;
//	}
//	
//	printf("%d년 %d월 %d일은 %s 입니다.", Year, Month, Day, Days[SumDay & 7]);
//}
//
////
////##블랙잭 게임 만들기
////게임 목표
////두 카드의 합이 21에 가깝게 만들되, 21을 넘지 않는 것이 목표
////21을 초과하면(버스트, Bust) 즉시 패배
////배팅은 없음
////
////카드의 값
////2~10: 카드 숫자 그대로 점수.
////J(잭), Q(퀸), K(킹) : 각각 10점.
////A(에이스) : 1점 또는 11점(유리한 쪽으로 자동 선택).
////
////게임 진행 절차
////1) 초기 배분
////딜러와 플레이어 모두 2장씩 카드를 받음.
////플레이어의 카드는 두 장 모두 공개.
////딜러는 한 장은 공개(오픈 카드), 한 장은 비공개(홀 카드).
////
////2) 플레이어 턴
////플레이어가 먼저 행동.
////선택지:
////Hit(히트) : 카드를 한 장 더 받음.
////Stand(스탠드) : 더 이상 카드를 받지 않고 멈춤.
////플레이어가 21을 초과하면(버스트) 즉시 패배.
////
////3) 딜러 턴
////플레이어가 스탠드를 하면 딜러 차례.
////딜러는 자신의 카드 합이 17 이상이 될 때까지 계속 히트(카드 받기)해야 함.
////A가 포함된 "소프트 17"(A + 6 = 7 또는 17)도 멈춤.
////17 이상이면 멈추고, 21을 넘으면 딜러 패배.
////
////4) 승패 판정
////버스트가 아닌 경우, 점수 비교.
////플레이어가 21에 더 가까우면 승리.
////동점이면 무승부(Push).
////딜러가 더 가까우면 패배.♠♣◆♥
////블랙잭: 처음 받은 두 장이 A + 10(또는 J, Q, K)이면 블랙잭.일반적으로 블랙잭이 단순 21점보다 우선함.
////
//std::string SPADE = "♠";
//std::string CLUB = "♣";
//std::string DIA = "◆";
//std::string HEART = "♥";
//const int AI = 17;
//
//enum Shape 
// { Spade,
//	 Club,
//	 Dia,
//	 Heart };
// 
//enum Num 
// { Ace = 1,
// Jack = 11,
// Queen = 12,
// King = 13 };
//
//
//
////모든카드
//Card CardAll[52];
//CPlayer P[2];
//int Next = 0;
//void Shuffle()
//{
//	
//	for (int i = 51; i > 0; i--)
//	{
//		int Index = rand() % (i + 1);
//		Card temp = CardAll[Index];
//		CardAll[Index] = CardAll[i];
//		CardAll[i] = temp;
//	}
//}
//
//void FillDeck()
//{
//	int Index = 0;
//	// 4개의 모양과 13개의 숫자를 짝지어서 카드 만듦
//	for (int j = 0; j < 4; j++)
//	{
//		for (int k = 1; k < 14; k++)
//		{
//			CardAll[Index].Number = k;
//			CardAll[Index].Shape = j;
//			Index++;
//		}
//	}
//}
//
//
//
//// 섞은 후 앞에서 부터 한장 나눠주는 함수
//Card Deal(int Next)
//{
//	return CardAll[Next];
//}
//
//void PrintCard(int Point, int Turns)
//{
//	int AceScore = 0;
//
//	printf("-------\n");
//
//	switch (P[Point].Card_Player[Turns].Shape)
//	{
//	case Spade:
//		printf("|%s    |\n", SPADE.c_str());
//		break;
//	case Club:
//		printf("|%s    |\n", CLUB.c_str());
//		break;
//	case Dia:
//		printf("|%s    |\n", DIA.c_str());
//		break;
//	case Heart:
//		printf("|%s    |\n", HEART.c_str());
//		break;
//	}
//	switch (P[Point].Card_Player[Turns].Number)
//	{
//	case Ace:
//		printf("|  A  |\n");
//		AceScore = -1;
//		break;
//	case Jack:
//		printf("|  J  |\n");
//		P[Point].Score += 10;
//		break;
//	case Queen:
//		printf("|  Q  |\n");
//		P[Point].Score += 10;
//		break;
//	case King:
//		printf("|  K  |\n");
//		P[Point].Score += 10;
//		break;
//	default:
//		printf("| %2d  |\n", P[Point].Card_Player[Turns].Number);
//		P[Point].Score += P[Point].Card_Player[Turns].Number;
//		break;
//	}
//
//	switch (P[Point].Card_Player[Turns].Shape)
//	{
//	case Spade:
//		printf("|    %s|\n", SPADE.c_str());
//		break;
//	case Club:
//		printf("|    %s|\n", CLUB.c_str());
//		break;
//	case Dia:
//		printf("|    %s|\n", DIA.c_str());
//		break;
//	case Heart:
//		printf("|    %s|\n", HEART.c_str());
//		break;
//	}
//
//	printf("-------\n");
//
//	// ace 계산 묻기
//		if (AceScore == -1)
//		{
//			printf("ACE가 나왔네요, [1/11]점으로 계산합니다: ");
//			std::cin >> AceScore;
//			P[Point].Score += AceScore;
//		}
//
//	printf("score : %d\n", P[Point].Score);
//
//	return;
//}
//
//// 배팅하는 함수
//int Betting(CPlayer P)
//{
//	int Bet;
//
//	printf("돈을 걸어봅시다! %d 중 얼마를 배팅하시겠습니까? ", P.Cash);
//	std::cin >> Bet;
//
//	if (Bet > P.Cash)
//	{
//		printf("이런이런... 돈이 부족하군요. 조금만 아껴야겠어요. 다시 입력 : ");
//		std::cin >> Bet;
//		return Bet;
//	}
//	else return Bet;
//}
//// 게임을 시작
//void StayorHit(int Play, int Turns)
//{
//	int Answer = 0;
//
//	printf("\n##########TURN : PLAYER님##########\n\n");
//	while (P[Play].Score < 21)
//	{
//		printf("HIT을 원하시면 1를, STAY를 원하시면 2를 입력하세요 : ");
//		std::cin >> Answer;
//
//		if (Answer == 1)
//		{
//			Turns++;
//			P[Play].Card_Player[Turns] = Deal(Next++);
//			PrintCard(Play, Turns);
//		}
//		else if (Answer == 2)
//		{
//			break;
//		}
//		else
//		{
//			printf("HIT이면 1, STAY면 2입니다.\n재선택 : ");
//		}
//	}
//
//	if (P[Play].Score > 21)
//	{
//		printf("21점을 넘었습니다. LOSS\n");
//		P[Play].Score = 0;
//	}
//	else if (P[Play].Score == 21)
//	{
//		printf("21점입니다. WIN\n");
//	}
//}
//
//
//// 딜러는 AI 17이면 stay
//void Dealer(int Turns)
//{
//	printf("\n##########DEALER's TURN##########\n\n");
//	while (P[0].Score < 21)
//	{
//		if (P[0].Score <= AI)
//		{
//			Turns++;
//			P[0].Card_Player[Turns] = Deal(Next++);
//			PrintCard(0, Turns);
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (P[0].Score > 21) P[0].Score = 0;
//}
//
//
//// 게임 진행
//void Play()
//{
//	int Turns = 0; int Goon = 1; int Push = 0; int PushFlag = 0; int BetTotal = 0;
//
//	while (Goon)
//	{
//		int Winner = -1;
//		int	Winnerscore = -1;
//		int Bet[3]; Bet[0] = 10;
//		PushFlag = 0;
//
//		if (Push == 0) BetTotal = 0;
//
//		//  자금 확인
//		if (P[1].Cash <= 0)
//		{
//			printf("!!! PLAYER1 파산하셨습니다. 게임종료!!\n\n");
//			break;
//		}
//		
//		
//
//		P[0].Score = 0;
//		P[1].Score = 0;
//		
//
//
//		P[0].Card_Player[Turns] = Deal(Next++);
//		PrintCard(0, Turns);
//
//		printf("\n<<PLAYER>>\n");
//		printf("CASH : %d\n", P[1].Cash);
//		P[1].Card_Player[Turns] = Deal(Next++);
//		PrintCard(1, Turns);
//
//		
//
//		BetTotal += Bet[0];
//		printf("\nPLAYER님, ");
//		Bet[1] = Betting(P[1]);
//		BetTotal += Bet[1];
//		
//
//		StayorHit(1, Turns);
//		
//
//		Dealer(Turns);
//
//		printf("\n게임 결과>> DEALER: %d / PLAYER1: %d\n", P[0].Score, P[1].Score);
//
//		// 동점이면, 다음 게임으로 배팅 금액을 몰빵
//		for (int i = 0; i < 2; i++)
//		{
//			if (Winnerscore < P[1].Score)
//			{
//				Winner = i;
//				Winnerscore = P[1].Score;
//			}
//		}
//		printf("prize: ");
//
//		for (int i = 0; i < 2; i++)
//		{
//			if (Winnerscore == P[1].Score && Winner != i)
//			{
//				if (Push == 0) Push = 1;
//				PushFlag = 1;
//			}
//		}
//
//		Push *= PushFlag;
//
//		if (Push == 1)
//		{
//			P[1].Cash -= Bet[1];
//			printf("0\n");
//		}
//		else if (Winner == 0)
//		{
//			P[1].Cash -= Bet[1];
//			Push = 0;
//			printf("%d\n", BetTotal);
//		}
//		else if (Winner == 1)
//		{
//			P[1].Cash += BetTotal;
//			Push = 0;
//			printf("%d\n", BetTotal);
//		}
//		
//
//		printf("\n결과>> P1 CASH : %d \n", P[1].Cash);
//
//		int answer;
//		printf("계속하시겠습니까? ");
//		std::cin>> answer;
//
//		if (answer == 1)
//		{
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	printf("게임이 종료됩니다...)");
//}
