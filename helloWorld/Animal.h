#pragma once
#include<string>
///*
//���� Ŭ���� ������
//	Name : std::string
//	Energy : float
//	Age : int
//
//	������ �����̸�(Move) �������� �Һ��Ѵ�.
//	������ �Ҹ��� ���� �� �ִ�.(MakeSound)
//	������ ������(Eat) �������� �����Ѵ�.
//	������ ���� �ڸ�(Sleep) ���̰� �����ϰ� �������� ���� ȸ���ȴ�.
//	������ ��� ������ ����� �� �ִ�.(ShoInfo)
//*/

class Animal
{
public:
	std::string Name;
	float Energy = 1.0f; // 0.0f ~ 1.0f : 1.0f�� �� 100%;
	int Age = 0;
	bool DeadOrAlive;
	int Power = 0;
	Animal(const char* InName);
	~Animal();

	Animal() = default;
	/*Animal(std::string InName)
	//	: Name(InName)
	//{
	//}*/	// ª�� ���� �Լ��� ������ �ش��� �־ �ȴ�(�ڵ� inlineó��)


	void Move();
	void MakeSound();
	void Eat();
	void Sleep();
	void ShoInfo();
	void Attack();

};

