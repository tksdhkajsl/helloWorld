#include "Day_250916.h"
#include "Car.h"
#include "Animal.h"

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
void Day_250916::AnimalTest()
{
	Animal myAni = Animal("�䳢");
	myAni.Power = 1;
	myAni.Move();
	myAni.MakeSound();
	myAni.Eat();
	myAni.Sleep();
	myAni.ShoInfo();

	Animal* pmyAni = new Animal("����");
	pmyAni->Power = 10;
	pmyAni->Move();
	pmyAni->MakeSound();
	pmyAni->Attack();
	pmyAni->Eat();
	pmyAni->Sleep();
	pmyAni->ShoInfo();
	myAni.ShoInfo();

	delete pmyAni;
	pmyAni = nullptr;

}