#include "Day_250916.h"
#include "Car.h"
#include "Animal.h"
#include "Tiger.h"

//Day_250916::Day_250916()
//{
//	// ��ü�� ���� �� �� ȣ��
//}
//
//Day_250916::~Day_250916()
//{
//	// ������ ������ �� ȣ��
//}

void Day_250916::ClassInstance()
{
	Car myCar = Car("��������");	// �ν��Ͻ� ����. ������� Ÿ�̹��� �Լ��� ����Ǿ��� �� �����
	
	Car* pCar = new Car("�����Ҵ�");
	pCar->HanddleTurn();
	delete pCar;
	pCar = nullptr;
	
}

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
//void Day_250916::AnimalTest()
//{
//	Animal myAni = Animal("�䳢");
//	
//	myAni.Move();
//	myAni.MakeSound();
//	myAni.Eat();
//	myAni.Sleep();
//	myAni.ShowInfo();
//
//	Animal* pmyAni = new Animal("����");
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
// ���� �ǽ�
// �ٸ� ���� ������(3����)
// �ٸ� ���� ���� �Լ� �����ϱ�
//void Day_250916::AnimalTiger()
//{
//	Tiger tiger = Tiger("ȣ����");
//	tiger.Move();
//	tiger.Hunt();
//	tiger.ShowInfo();
//	tiger.ShowInfo();
//
//	Animal* pAnimal = new Tiger("ȣ����");
//	delete pAnimal;
//	pAnimal = nullptr;
//}
//void Day_250916::AnimalLion()
//{
//	Lion lion = Lion("�ɹ�");
//	lion.Move();
//	lion.Runing();
//	lion.ShowInfo();
//}
//void Day_250916::AnimalWolf()
//{
//	Wolf wolf = Wolf("�̸�");
//	wolf.Move();
//	wolf.Howling();
//	wolf.ShowInfo();
//}
//void Day_250916::AnimalRabbit()
//{
//	Rabbit rabiit = Rabbit("�䲤��");
//	rabiit.Move();
//	rabiit.Jump();
//	rabiit.ShowInfo();
//}
