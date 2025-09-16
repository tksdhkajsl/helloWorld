//#pragma once
//
//struct Card
//{
//	int Value = 0;
//	char Suit = 0;
//
//	// ����ü�ȿ� �ִ� �Լ��� �����ϰ� �ڽ��� �����͸� ����ϴ� ��쿡�� ����� ���� ����.
//	bool IsAce() { return Value == 1; }
//	int GetCardValue() { return Value > 10 ? 10 : Value; }
//};
//
//void PlayBlackjack();
//
//void InitializeDeck(Card* InDeck);
//void ShuffleDeck(Card* InDeck);
//
//const Card& DrawCard(Card* InDeck, int& InTop);
//void AddCardToHand(Card* InHand, int& InCount, const Card& InCard);
//
//void PrintHands(
//	const Card* InPlayerHand, int InPlayerCount,
//	const Card* InDealerHand, int InDealerCount, bool InRevealHole);
//void PrintCard(const Card& InCard);
//void PrintPlayerHand(const Card* InHand, int InCount);
//void PrintDealerHand(const Card* InHand, int InCount, bool InRevealHole);
//
//bool IsBlackjack(const Card* InHand, int InCount);
//int GetCardValue(const Card& InCard);
//
//bool IsBust(Card* InHand, int InCount);
//int GetBestScore(Card* InHand, int InCount);
//bool IsSoft17(Card* InHand, int InCount);