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

