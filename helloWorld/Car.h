#pragma once
#include<string.h>
#include<string>
class Car
{
public:

	std::string Name;
	float Speed = 0.0f; //�ӵ�
	float fuel = 1.0f; //����

	Car(const char* InName);  //������
	~Car(); // �Ҹ���

	void Accel();  //���� ���
	void Break();	//���� ���
	void HanddleTurn();	//�ڵ� ����
};

