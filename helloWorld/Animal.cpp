#include "Animal.h"

Animal::Animal(const char* InName)
	:Name(InName)
{
	printf("�߻��� [%s]�� ��Ÿ�����ϴ�..\n", Name.c_str());
}


Animal::~Animal()
{
	printf("�߻��� [%s]�� ��������ϴ�..\n", Name.c_str());
}

void Animal::Move()
{
	if (Energy < 0.1f)
	{
		printf("[%s] : ���� ��� ������ �� �����ϴ�.\n", Name.c_str());
	}
	else
	{
		printf("[%s] : �����Դϴ�.\n", Name.c_str());
		Energy -= 0.1f;
		printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
	}
}

void Animal::MakeSound()
{
	printf("�߻��� [%s]�� �Ҹ����ϴ�..\n", Name.c_str());
	Energy -= 0.1f;
}

void Animal::Eat()
{
	printf("[%s] : �Խ��ϴ�.\n", Name.c_str());
	printf("[%s] : �������� 30% ȸ���մϴ�.\n", Name.c_str());
	Energy += 0.3f;
	if (Energy > 1.0f)
	{
		Energy = 1.0f;
	}
}

void Animal::Sleep()
{
	printf("[%s] : ���� ��ϴ�.\n", Name.c_str());
	printf("[%s] : �������� 100% ȸ���մϴ�.\n", Name.c_str());
	Energy = 1.0f;
	Age++;
	printf("[%s] : ���̰� �ѻ� �����մϴ�. %d�� �Դϴ�.\n", Name.c_str(), Age);
}

void Animal::ShoInfo()
{
	printf("------���� ����-----.\n");
	printf("�߻���\t [%s].\n", Name.c_str());
	printf("���� ���� : [%d].\n", Age);
	printf("���� ü�� : [%.0f].\n", Energy * 100);
	if (DeadOrAlive == true)
	{
		printf("���� ���� : [����].\n");
	}
	else
	{
		printf("���� ���� : [���].\n");
	}
	printf("--------------------.\n");
}

void Animal::Attack()
{

}
