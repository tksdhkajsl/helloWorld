//#include "Day0917.h"
//#include "Tiger.h"
//#include "Hawk.h"
//#include "Dog.h"
//#include "TestSample.h"
//#include "Shape.h"
//#include <stdint.h>
//void Day0917::TestPolymorphism()
//{
//	Tiger* pTiger = new Tiger("ȣ����");
//	Hawk* pHawk = new Hawk("����");
//
//	printf("ȣ���� �̵�\n");
//	pTiger->Move();
//	printf("���� �̵�\n");
//	pHawk->Move();
//
//	printf("���� �̵�\n");
//	Animal* pAnimal = pTiger; //Animal�� Move�� ���� -> �����Լ��� �� �Ŀ���  ���� Ŭ������ Move����ȴ�.
//	pAnimal->Move();
//
//	// C ��Ÿ�� ĳ����(����)
//	//Tiger* pTempTiger = (Tiger*)pAnimal;
//	//pTempTiger->Hunt();
//	//((Tiger*)pAnimal)->Hunt();
//
//	//C++ ��Ÿ�� ĳ���� �� ��
//	//��Ÿ��(������)�� �� �ּҰ� ���� � �ڽ� Ŭ������ ��ü�� ����Ű�� �ִ��� �����ϰ� Ȯ�����ִ� cast
//	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
//	if (pTempTiger == nullptr)
//	{
//		// pAnimal�� Tiger*�� �ƴϴ�.
//	}
//	else
//	{
//		// pAnimal�� ����� �ּҴ�  Tiger�� �ּҰ� �´�.
//		pTempTiger->Hunt();
//	}
//	// pAnimal->Hunt(); // ��� �Ұ���
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
//	Parent* pParent = new Child();	// ����
//	delete pParent;
//	pParent = nullptr;
//}
//
//void Day0917::TestPratice1()
//{
//	//Animal* �迭 �����
//	//���������� ������ �ֱ�
//	//�迭�� ����ִ� ��� ������ MakeSound �����
//
//	const int Size = 5;
//	Animal* Zoo[Size];
//	Zoo[0] = new Tiger("ȣ����");
//	Zoo[1] = new Tiger("ȣ����");
//	Zoo[2] = new Hawk("����");
//	Zoo[3] = new Hawk("�ŵ���");
//	Zoo[4] = new Dog("�۸���");
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
//	/* Tiger* pTiger = new Tiger("ȣ����");
//	/* Hawk* pHawk = new Hawk("����");
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
//	// ���� �ǽ�
//	// Animal�� Move�Լ��� ���� ���� �Լ��� ���� Animal�� �߻�Ŭ������ �����
//	//�� �������� Move�� ������ �� �����ϱ�
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
//	};*/ //���� enum�� ������ �����̱� ������ �̸��� ��ġ�� �ȵ�
//
//	Color myColor = Green;
//	Fruit myFruit = Orange;
//	if (myColor == myFruit)
//	{
//		//�������� �Ұ��������� ���������δ� ����.
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
//		Red = 0,	//TrafficLight2�ȿ� �ִ� Red�̱� ������ �̸��� �������� �ʴ´�.
//		Green,
//		Blue
//	};
//	Color2 myColor2 = Color2::Red;
//	Fruit2 myFruit2 = Fruit2::Apple;
//
//	//if (myColor2 == myFruit2)
//	//{
//	//	//���������� ����.
//	//}
//	int Number = static_cast<int>(myColor2); //����� ĳ���� �ʼ�/ �Ͻ��� ĳ���� �Ұ���
//
//
//	// uint8_t�� ����Ϸ��� #include <stdint.h>�� �ʿ�
//	
//
//	PlayerState state = PlayerState::None;
//	state = static_cast<PlayerState>(static_cast<int>(state) | static_cast<int>(PlayerState::OnGround));
//	state = state | PlayerState::OnGround;	// ��ɾ� �����ε��� �ؾ� ����
//
//}
//
//
