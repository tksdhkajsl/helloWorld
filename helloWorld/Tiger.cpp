#include "Tiger.h"

void Tiger::Hunt()
{
	printf("[%s]가 사냥합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}
void Tiger::Move()
{
	printf("[%s]가 전력질주합니다.\n", Name.c_str());
	//Animal::Move();
}

void Tiger::MakeSound()
{
	printf("[%s]:소리냅니다.\n 크아아앙!!!\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}

void Tiger::Attack(ICanBattle* InTarget)
{
	InTarget->TakeDamage(AttackPower);
}

void Tiger::TakeDamage(float InDamage)
{
	printf("[%.0f]의 피해를 입었다\n", InDamage);
}

void Lion::Runing()
{
	printf("[%s]가 달립합니다.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}

void Wolf::Howling()
{
	printf("[%s]가 하울링을 합니다.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}

void Rabbit::Jump()
{
	printf("[%s]가 뛰어오릅니다.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}
