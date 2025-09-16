
#include <stdio.h>
#include "Car.h"

Car::Car(const char* InName)
	: Name(InName)
{
	printf("[%s ]자동차를 생성합니다.\n",Name.c_str());
}

Car::~Car()
{
	printf("[%s ]자동차를 삭제합니다.\n", Name.c_str());
}

void Car::Accel() // Car 클래스의 Accel 함수
{
	printf("자동차를 가속합니다.\n");
}

void Car::Break()
{
	printf("자동차를 감속합니다.\n");
}

void Car::HanddleTurn()
{
	printf("자동차를 조향합니다.\n");
}
