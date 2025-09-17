#include "Day_250916.h"
#include "Car.h"
#include "Animal.h"
#include "Tiger.h"

//Day_250916::Day_250916()
//{
//	// 객체가 생성 될 때 호출
//}
//
//Day_250916::~Day_250916()
//{
//	// 객제가 해제될 때 호출
//}

void Day_250916::ClassInstance()
{
	Car myCar = Car("지역변수");	// 인스턴스 생성. 사라지는 타이밍은 함수가 종료되었을 때 사라짐
	
	Car* pCar = new Car("동적할당");
	pCar->HanddleTurn();
	delete pCar;
	pCar = nullptr;
	
}

//동물 클래스 만들어보기
//	Name : std::string
//	Energy : float
//	Age : int
//
//	동물은 움직이면(Move) 에너지를 소비한다.
//	동물은 소리를 지를 수 있다.(MakeSound)
//	동물은 먹으면(Eat) 에너지가 증가한다.
//	동물은 잠을 자면(Sleep) 나이가 증가하고 에너지가 완전 회복된다.
//	동물의 모든 정보를 출력할 수 있다.(ShoInfo)
//void Day_250916::AnimalTest()
//{
//	Animal myAni = Animal("토끼");
//	
//	myAni.Move();
//	myAni.MakeSound();
//	myAni.Eat();
//	myAni.Sleep();
//	myAni.ShowInfo();
//
//	Animal* pmyAni = new Animal("사자");
//	
//	pmyAni->Move();
//	pmyAni->MakeSound();
//	
//	pmyAni->Eat();
//	pmyAni->Sleep();
//	pmyAni->ShowInfo();
//	myAni.ShowInfo();
//	int Age = myAni.GetAge();
//	const std::string& Name = myAni.GetName();
//	delete pmyAni;
//	pmyAni = nullptr;
//
//}
// 간단 실습
// 다른 동물 만들어보기(3종류)
// 다른 동물 전용 함수 구현하기
//void Day_250916::AnimalTiger()
//{
//	Tiger tiger = Tiger("호식이");
//	tiger.Move();
//	tiger.Hunt();
//	tiger.ShowInfo();
//	tiger.ShowInfo();
//
//	Animal* pAnimal = new Tiger("호돌이");
//	delete pAnimal;
//	pAnimal = nullptr;
//}
//void Day_250916::AnimalLion()
//{
//	Lion lion = Lion("심바");
//	lion.Move();
//	lion.Runing();
//	lion.ShowInfo();
//}
//void Day_250916::AnimalWolf()
//{
//	Wolf wolf = Wolf("이리");
//	wolf.Move();
//	wolf.Howling();
//	wolf.ShowInfo();
//}
//void Day_250916::AnimalRabbit()
//{
//	Rabbit rabiit = Rabbit("토깽이");
//	rabiit.Move();
//	rabiit.Jump();
//	rabiit.ShowInfo();
//}
