#include "Player.h"


void Player::Attack()
{
	int CriticalChance = (rand() % 10) + 1;

	if (CriticalChance == 1 || CriticalChance == 3)
	{
		float Cri = Damage * 2.0f;
	}

}