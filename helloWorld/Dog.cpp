#include "Dog.h"

void Dog::Move()
{
	printf("[%s]�� �������մϴ�.\n", Name.c_str());
	//Animal::Move();
}

void Dog::MakeSound()
{
	printf("[%s]:�Ҹ����ϴ�.\n �п�!!\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}
