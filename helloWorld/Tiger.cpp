#include "Tiger.h"

void Tiger::Hunt()
{
	printf("[%s]�� ����մϴ�.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}
void Tiger::Move()
{
	printf("[%s]�� ���������մϴ�.\n", Name.c_str());
	//Animal::Move();
}

void Tiger::MakeSound()
{
	printf("[%s]:�Ҹ����ϴ�.\n ũ�ƾƾ�!!!\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}

void Tiger::Attack(ICanBattle* InTarget)
{
	InTarget->TakeDamage(AttackPower);
}

void Tiger::TakeDamage(float InDamage)
{
	printf("[%.0f]�� ���ظ� �Ծ���\n", InDamage);
}

void Lion::Runing()
{
	printf("[%s]�� �޸��մϴ�.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}

void Wolf::Howling()
{
	printf("[%s]�� �Ͽ︵�� �մϴ�.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}

void Rabbit::Jump()
{
	printf("[%s]�� �پ�����ϴ�.", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}
