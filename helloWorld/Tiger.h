//#pragma once
//#include"Animal.h"
//#include"ICanBattle.h"
//class Tiger : public Animal , public ICanBattle//Tiger�� animal�� ��� ��� �޾Ҵ�.
//{
//public:
//	void Hunt();
//	virtual void Move() override; // ȣ���̴� Animal�� Move�Լ��� �������.
//	virtual void MakeSound() override; 
//
//
//	virtual void Attack(ICanBattle* Target) override;
//	virtual void TakeDamage(float InDamage) override;
//public:
//	//������/�Ҹ��ڴ� ����� ����� �ƴϴ�.
//	Tiger() = default;
//	Tiger(std::string InName)
//		: Animal(InName) // �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
//	{
//
//	}
//	virtual ~Tiger(){}
//
//	float AttackPower = 10.0f;
//};
//
//class Lion : public Animal
//{
//public:
//	void Runing();
//public:
//	//������/�Ҹ��ڴ� ����� ����� �ƴϴ�.
//	Lion() = default;
//	Lion(std::string InName)
//		: Animal(InName) // �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
//	{
//
//	}
//};
//
//class Wolf : public Animal //Tiger�� animal�� ��� ��� �޾Ҵ�.
//{
//public:
//	void Howling();
//public:
//	//������/�Ҹ��ڴ� ����� ����� �ƴϴ�.
//	Wolf() = default;
//	Wolf(std::string InName)
//		: Animal(InName) // �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
//	{
//
//	}
//};
//
//class Rabbit : public Animal //Tiger�� animal�� ��� ��� �޾Ҵ�.
//{
//public:
//	void Jump();
//public:
//	//������/�Ҹ��ڴ� ����� ����� �ƴϴ�.
//	Rabbit() = default;
//	Rabbit(std::string InName)
//		: Animal(InName) // �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
//	{
//
//	}
//};