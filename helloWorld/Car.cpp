
#include <stdio.h>
#include "Car.h"

Car::Car(const char* InName)
	: Name(InName)
{
	printf("[%s ]�ڵ����� �����մϴ�.\n",Name.c_str());
}

Car::~Car()
{
	printf("[%s ]�ڵ����� �����մϴ�.\n", Name.c_str());
}

void Car::Accel() // Car Ŭ������ Accel �Լ�
{
	printf("�ڵ����� �����մϴ�.\n");
}

void Car::Break()
{
	printf("�ڵ����� �����մϴ�.\n");
}

void Car::HanddleTurn()
{
	printf("�ڵ����� �����մϴ�.\n");
}
