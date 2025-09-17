#include "Dog.h"

void Dog::Move()
{
	printf("[%s]가 개수영합니다.\n", Name.c_str());
	//Animal::Move();
}

void Dog::MakeSound()
{
	printf("[%s]:소리냅니다.\n 왈왈!!\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}
