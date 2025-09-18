//#pragma once
//#include"Animal.h"
//#include"ICanBattle.h"
//class Tiger : public Animal , public ICanBattle//Tiger는 animal을 모두 상속 받았다.
//{
//public:
//	void Hunt();
//	virtual void Move() override; // 호랑이는 Animal의 Move함수를 덮어쓸꺼다.
//	virtual void MakeSound() override; 
//
//
//	virtual void Attack(ICanBattle* Target) override;
//	virtual void TakeDamage(float InDamage) override;
//public:
//	//생성자/소멸자는 상속의 대상이 아니다.
//	Tiger() = default;
//	Tiger(std::string InName)
//		: Animal(InName) // 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
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
//	//생성자/소멸자는 상속의 대상이 아니다.
//	Lion() = default;
//	Lion(std::string InName)
//		: Animal(InName) // 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
//	{
//
//	}
//};
//
//class Wolf : public Animal //Tiger는 animal을 모두 상속 받았다.
//{
//public:
//	void Howling();
//public:
//	//생성자/소멸자는 상속의 대상이 아니다.
//	Wolf() = default;
//	Wolf(std::string InName)
//		: Animal(InName) // 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
//	{
//
//	}
//};
//
//class Rabbit : public Animal //Tiger는 animal을 모두 상속 받았다.
//{
//public:
//	void Jump();
//public:
//	//생성자/소멸자는 상속의 대상이 아니다.
//	Rabbit() = default;
//	Rabbit(std::string InName)
//		: Animal(InName) // 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
//	{
//
//	}
//};