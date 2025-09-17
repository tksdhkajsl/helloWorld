#include "Monsters.h"


void Goblin::GoblinInfo()
{
	MName = "���";
	Health = 50.0f;
	Damage = 4.0f;
	Gold = 40;
}

void Goblin::SpeedUp()
{
	printf("����� �ӵ� ������ ����մϴ�.\n");
}

void Orc::OrcInfo()
{
	MName = "��ũ";
	Health = 200.0f;
	Damage = 30.0f;
	Gold = 230;
}

void Orc::Berserk()
{
	printf("��ũ�� ����ũ�� ����մϴ�.\n");
	Damage += 0.2f;
	Health += 0.2f;
}

void Zombie::ZombieInfo()
{
	MName = "����";
	Health = 80.0f;
	Damage = 11.0f;
	Gold = 70;
}

void Zombie::Poison()
{
	printf("���� �� ������ ����մϴ�.\n");
	Damage += 0.3f;
}

void Skeleton::SkeletonInfo()
{
	MName = "�ذ�";
	Health = 150.0f;
	Damage = 8.0f;
	Gold = 110;
}

void Skeleton::Recover()
{
	printf("�ذ��� ü�� ȸ���� ����մϴ�.\n");
	Health += 0.3f;
}
