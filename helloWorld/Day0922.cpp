#include "Day0922.h"
#include "Map.h"
#include "BattleShip.h"
#include "BinarySearch.h"
#include <random>

void Day0922::TestBattleShip()
{
	//Map::IsValidPoition(10, 20);	// static �Լ��� �̷��� ��� ����

	//srand(time(0));

	BattleShip Game;
	Game.Play();

}

void Day0922::TestTree()
{
	BinarySearch bst;
	bst.Insert(30);
	bst.Insert(50);
	bst.Insert(10);
	bst.PrintPreOrder();
}
