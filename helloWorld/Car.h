#pragma once
#include<string.h>
#include<string>
class Car
{
public:

	std::string Name;
	float Speed = 0.0f; //속도
	float fuel = 1.0f; //연료

	Car(const char* InName);  //생성자
	~Car(); // 소멸자

	void Accel();  //가속 기능
	void Break();	//감속 기능
	void HanddleTurn();	//핸들 조향
};

