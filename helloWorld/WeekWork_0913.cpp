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
//////1. ##���� ���ϱ�
//////1�� 1�� 1��(������)�� �������� �Է��� ��¥���� ��ĥ�� �������� ����� ��, 7�� ���� �������� ������ ���ϱ�.
//////���⵵ �ùٸ��� ó���� ��
//////�Է¹��� ��, ��, ���� �������� ������ ���.
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
//	const char* Days[7] = { "�Ͽ���", "������","ȭ����","������","�����","�ݿ���","�����" };
//	int Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int Index = 0;
//	int Count = 0;
//	int SumDay = 0;
//
//	//�����ϼ�
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
//	printf("%d�� %d�� %d���� %s �Դϴ�.", Year, Month, Day, Days[SumDay & 7]);
//}
//
////
////##���� ���� �����
////���� ��ǥ
////�� ī���� ���� 21�� ������ �����, 21�� ���� �ʴ� ���� ��ǥ
////21�� �ʰ��ϸ�(����Ʈ, Bust) ��� �й�
////������ ����
////
////ī���� ��
////2~10: ī�� ���� �״�� ����.
////J(��), Q(��), K(ŷ) : ���� 10��.
////A(���̽�) : 1�� �Ǵ� 11��(������ ������ �ڵ� ����).
////
////���� ���� ����
////1) �ʱ� ���
////������ �÷��̾� ��� 2�徿 ī�带 ����.
////�÷��̾��� ī��� �� �� ��� ����.
////������ �� ���� ����(���� ī��), �� ���� �����(Ȧ ī��).
////
////2) �÷��̾� ��
////�÷��̾ ���� �ൿ.
////������:
////Hit(��Ʈ) : ī�带 �� �� �� ����.
////Stand(���ĵ�) : �� �̻� ī�带 ���� �ʰ� ����.
////�÷��̾ 21�� �ʰ��ϸ�(����Ʈ) ��� �й�.
////
////3) ���� ��
////�÷��̾ ���ĵ带 �ϸ� ���� ����.
////������ �ڽ��� ī�� ���� 17 �̻��� �� ������ ��� ��Ʈ(ī�� �ޱ�)�ؾ� ��.
////A�� ���Ե� "����Ʈ 17"(A + 6 = 7 �Ǵ� 17)�� ����.
////17 �̻��̸� ���߰�, 21�� ������ ���� �й�.
////
////4) ���� ����
////����Ʈ�� �ƴ� ���, ���� ��.
////�÷��̾ 21�� �� ������ �¸�.
////�����̸� ���º�(Push).
////������ �� ������ �й�.�����ߢ�
////����: ó�� ���� �� ���� A + 10(�Ǵ� J, Q, K)�̸� ����.�Ϲ������� ������ �ܼ� 21������ �켱��.
////
//std::string SPADE = "��";
//std::string CLUB = "��";
//std::string DIA = "��";
//std::string HEART = "��";
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
////���ī��
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
//	// 4���� ���� 13���� ���ڸ� ¦��� ī�� ����
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
//// ���� �� �տ��� ���� ���� �����ִ� �Լ�
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
//	// ace ��� ����
//		if (AceScore == -1)
//		{
//			printf("ACE�� ���Գ׿�, [1/11]������ ����մϴ�: ");
//			std::cin >> AceScore;
//			P[Point].Score += AceScore;
//		}
//
//	printf("score : %d\n", P[Point].Score);
//
//	return;
//}
//
//// �����ϴ� �Լ�
//int Betting(CPlayer P)
//{
//	int Bet;
//
//	printf("���� �ɾ�ô�! %d �� �󸶸� �����Ͻðڽ��ϱ�? ", P.Cash);
//	std::cin >> Bet;
//
//	if (Bet > P.Cash)
//	{
//		printf("�̷��̷�... ���� �����ϱ���. ���ݸ� �Ʋ��߰ھ��. �ٽ� �Է� : ");
//		std::cin >> Bet;
//		return Bet;
//	}
//	else return Bet;
//}
//// ������ ����
//void StayorHit(int Play, int Turns)
//{
//	int Answer = 0;
//
//	printf("\n##########TURN : PLAYER��##########\n\n");
//	while (P[Play].Score < 21)
//	{
//		printf("HIT�� ���Ͻø� 1��, STAY�� ���Ͻø� 2�� �Է��ϼ��� : ");
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
//			printf("HIT�̸� 1, STAY�� 2�Դϴ�.\n�缱�� : ");
//		}
//	}
//
//	if (P[Play].Score > 21)
//	{
//		printf("21���� �Ѿ����ϴ�. LOSS\n");
//		P[Play].Score = 0;
//	}
//	else if (P[Play].Score == 21)
//	{
//		printf("21���Դϴ�. WIN\n");
//	}
//}
//
//
//// ������ AI 17�̸� stay
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
//// ���� ����
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
//		//  �ڱ� Ȯ��
//		if (P[1].Cash <= 0)
//		{
//			printf("!!! PLAYER1 �Ļ��ϼ̽��ϴ�. ��������!!\n\n");
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
//		printf("\nPLAYER��, ");
//		Bet[1] = Betting(P[1]);
//		BetTotal += Bet[1];
//		
//
//		StayorHit(1, Turns);
//		
//
//		Dealer(Turns);
//
//		printf("\n���� ���>> DEALER: %d / PLAYER1: %d\n", P[0].Score, P[1].Score);
//
//		// �����̸�, ���� �������� ���� �ݾ��� ����
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
//		printf("\n���>> P1 CASH : %d \n", P[1].Cash);
//
//		int answer;
//		printf("����Ͻðڽ��ϱ�? ");
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
//	printf("������ ����˴ϴ�...)");
//}
