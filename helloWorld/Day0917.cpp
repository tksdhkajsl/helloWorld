//#include "Day0917.h"
//#include "Tiger.h"
//#include "Hawk.h"
//#include "Dog.h"
//#include "TestSample.h"
//#include "Shape.h"
//#include <stdint.h>
//void Day0917::TestPolymorphism()
//{
//	Tiger* pTiger = new Tiger("호식이");
//	Hawk* pHawk = new Hawk("매형");
//
//	printf("호식이 이동\n");
//	pTiger->Move();
//	printf("매형 이동\n");
//	pHawk->Move();
//
//	printf("동물 이동\n");
//	Animal* pAnimal = pTiger; //Animal의 Move가 실행 -> 가상함수가 된 후에는  원래 클래스의 Move실행된다.
//	pAnimal->Move();
//
//	// C 스타일 캐스팅(위험)
//	//Tiger* pTempTiger = (Tiger*)pAnimal;
//	//pTempTiger->Hunt();
//	//((Tiger*)pAnimal)->Hunt();
//
//	//C++ 스타일 캐스팅 중 한
//	//런타임(실행중)에 이 주소가 실제 어떤 자식 클래스의 객체를 가리키고 있는지 안전하게 확인해주는 cast
//	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
//	if (pTempTiger == nullptr)
//	{
//		// pAnimal은 Tiger*가 아니다.
//	}
//	else
//	{
//		// pAnimal에 저장된 주소는  Tiger의 주소가 맞다.
//		pTempTiger->Hunt();
//	}
//	// pAnimal->Hunt(); // 사용 불가능
//
//
//	delete pTiger;
//	pTiger = nullptr;
//
//	delete pHawk;
//	pHawk = nullptr;
//}
//
//void Day0917::PrintVirtualFunction()
//{
//	Parent* pParent = new Child();	// 가능
//	delete pParent;
//	pParent = nullptr;
//}
//
//void Day0917::TestPratice1()
//{
//	//Animal* 배열 만들기
//	//여러종류의 동물을 넣기
//	//배열에 들어있는 모든 동물의 MakeSound 만들기
//
//	const int Size = 5;
//	Animal* Zoo[Size];
//	Zoo[0] = new Tiger("호식이");
//	Zoo[1] = new Tiger("호돌이");
//	Zoo[2] = new Hawk("매형");
//	Zoo[3] = new Hawk("매동생");
//	Zoo[4] = new Dog("멍멍이");
//
//	for (int i = 0; i < 5; i++)
//	{
//		Zoo[i]->MakeSound();
//		Zoo[i]->Move();
//	}
//
//	
//	for (int i = 0; i < 5; i++)
//	{
//		delete Zoo[i];
//		Zoo[i] = nullptr;
//	}
//
//	/* Tiger* pTiger = new Tiger("호식이");
//	/* Hawk* pHawk = new Hawk("매형");
//
//	Animal* pAnimal = pTiger; 
//	pAnimal->Move();
//	pAnimal->MakeSound();
//
//	pAnimal = pHawk;
//	pAnimal->Move();
//	pAnimal->MakeSound();
//	
//	delete pTiger;
//	pTiger = nullptr;
//
//	delete pHawk;
//	pHawk = nullptr;
//	*/
//}
//
//void Day0917::TestAbstractClass()
//{
//	// Shape* pShape = new Shape();
//
//	// 간단 실습
//	// Animal의 Move함수를 순수 가상 함수로 만들어서 Animal을 추상클래스로 만들기
//	//각 동물들의 Move는 별도로 다 구현하기
//
//}
//
//
//
//enum class PlayerState : uint8_t
//{
//	None = 0,
//	OnGround = 1 << 0,
//	Jumping = 1 << 1,
//	Stunned = 1 << 2,
//	Poisoned = 1 << 3,
//	Invisible = 1 << 4,
//	Invincible = 1 << 5,
//	Flying = 1 << 6
//};
//
//inline PlayerState operator|(PlayerState Left, PlayerState Right)
//{
//	return static_cast<PlayerState>(static_cast<int>(Left) | static_cast<int>(Right));
//};
//void Day0917::TestEnumClass()
//{
//	enum Color
//	{
//		Red = 0,
//		Green,
//		Blue
//	};
//	enum Fruit
//	{
//		Apple = 0,
//		Orange,
//		Banana
//	};
//	/*enum TrafficLight
//	{
//		Red = 0,
//		Green,
//		Blue
//	};*/ //기존 enum은 범위가 전역이기 때문에 이름이 겹치면 안됨
//
//	Color myColor = Green;
//	Fruit myFruit = Orange;
//	if (myColor == myFruit)
//	{
//		//논리적으로 불가능하지만 문법적으로는 허용됨.
//	}
//
//	enum class Color2
//	{
//		Red = 0,
//		Green,
//		Blue
//	};
//	enum class Fruit2
//	{
//		Apple = 0,
//		Orange,
//		Banana
//	};
//	enum class TrafficLight2
//	{
//		Red = 0,	//TrafficLight2안에 있는 Red이기 떄문에 이름이 겹쳐지지 않는다.
//		Green,
//		Blue
//	};
//	Color2 myColor2 = Color2::Red;
//	Fruit2 myFruit2 = Fruit2::Apple;
//
//	//if (myColor2 == myFruit2)
//	//{
//	//	//문법적으로 금지.
//	//}
//	int Number = static_cast<int>(myColor2); //명시적 캐스팅 필수/ 암시적 캐스팅 불가능
//
//
//	// uint8_t를 사용하려면 #include <stdint.h>가 필요
//	
//
//	PlayerState state = PlayerState::None;
//	state = static_cast<PlayerState>(static_cast<int>(state) | static_cast<int>(PlayerState::OnGround));
//	state = state | PlayerState::OnGround;	// 명령어 오버로딩을 해야 가능
//
//}
//
//
