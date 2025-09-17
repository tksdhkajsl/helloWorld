#pragma once
#include<random>
class Player
{
public:
	Player() = default;

	void Attack();
	

	float HP = 300.0f;
	float Damage = (rand() % 10 + 1) * 5.0f;
	int Wallet = 0;

};

