#include "Monsters.h"


void Goblin::GoblinInfo()
{
	MName = "고블린";
	Health = 50.0f;
	Damage = 4.0f;
	Gold = 40;
}

void Goblin::SpeedUp()
{
	printf("고블린이 속도 증가를 사용합니다.\n");
}

void Orc::OrcInfo()
{
	MName = "오크";
	Health = 200.0f;
	Damage = 30.0f;
	Gold = 230;
}

void Orc::Berserk()
{
	printf("오크가 버서크를 사용합니다.\n");
	Damage += 0.2f;
	Health += 0.2f;
}

void Zombie::ZombieInfo()
{
	MName = "좀비";
	Health = 80.0f;
	Damage = 11.0f;
	Gold = 70;
}

void Zombie::Poison()
{
	printf("좀비가 독 공격을 사용합니다.\n");
	Damage += 0.3f;
}

void Skeleton::SkeletonInfo()
{
	MName = "해골";
	Health = 150.0f;
	Damage = 8.0f;
	Gold = 110;
}

void Skeleton::Recover()
{
	printf("해골이 체력 회복을 사용합니다.\n");
	Health += 0.3f;
}
