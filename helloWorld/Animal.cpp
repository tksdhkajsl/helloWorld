#include "Animal.h"

Animal::Animal(const char* InName)
	:Name(InName)
{
	printf("야생의 [%s]가 나타났습니다..\n", Name.c_str());
}


Animal::~Animal()
{
	printf("야생의 [%s]가 사라졌습니다..\n", Name.c_str());
}

void Animal::Move()
{
	if (Energy < 0.1f)
	{
		printf("[%s] : 힘이 없어서 움직일 수 없습니다.\n", Name.c_str());
	}
	else
	{
		printf("[%s] : 움직입니다.\n", Name.c_str());
		Energy -= 0.1f;
		printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
	}
}

void Animal::MakeSound()
{
	printf("야생의 [%s]가 소리냅니다..\n", Name.c_str());
	Energy -= 0.1f;
}

void Animal::Eat()
{
	printf("[%s] : 먹습니다.\n", Name.c_str());
	printf("[%s] : 에너지를 30% 회복합니다.\n", Name.c_str());
	Energy += 0.3f;
	if (Energy > 1.0f)
	{
		Energy = 1.0f;
	}
}

void Animal::Sleep()
{
	printf("[%s] : 잠을 잡니다.\n", Name.c_str());
	printf("[%s] : 에너지를 100% 회복합니다.\n", Name.c_str());
	Energy = 1.0f;
	Age++;
	printf("[%s] : 나이가 한살 증가합니다. %d살 입니다.\n", Name.c_str(), Age);
}

void Animal::ShoInfo()
{
	printf("------동물 정보-----.\n");
	printf("야생의\t [%s].\n", Name.c_str());
	printf("동물 나이 : [%d].\n", Age);
	printf("동물 체력 : [%.0f].\n", Energy * 100);
	if (DeadOrAlive == true)
	{
		printf("동물 생사 : [생존].\n");
	}
	else
	{
		printf("동물 생사 : [사망].\n");
	}
	printf("--------------------.\n");
}

void Animal::Attack()
{

}
