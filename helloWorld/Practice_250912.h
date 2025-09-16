#pragma once
#include <string>
#include <random>


// ����ü�� �ش��� �����Ѵ�.
struct Enemy
{
	// �ɹ� ������
	std::string Name = "���";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	// �⺻ ������.
	Enemy()
	{
		// ������ ���� �ƴ� ����� �ʱ�ȭ �Ǿ�� �� �� ���
		DropGold = rand() % 100 + 50;	// 50 ~ 150 �������� ������
	}

	Enemy(std::string _Name)
	{
		Name = _Name;
	}

	// ���� �ǽ�
	// float Modifier�� �Ķ���ͷ� �޴� ������ �����
	//	- Health�� ������̾��� 10��� ����
	//	- AttackPower�� ������̾��� 5��� ����
	//	- DropGold�� ������̾��� 100��� ����

	Enemy(float Modifier)
	{
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100.0f);
	}

	Enemy(std::string _Name, float Modifier)
	{
		Name = _Name;
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100.0f);
	}

	Enemy(std::string _Name, float _Health, float _AttackPower, int _DropGold)
		: Name(_Name), Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold)	// ���鶧���� ���� ����ü�� ���������.
	{
		// ���⼭ ���� ���� ����� ���� ���� ���� ��(�׷��� ����� �ʿ��� �͵��� ���ʿ� �ؾ���)
		//Name = _Name;
		//Health = _Health;
		//AttackPower = _AttackPower;
		//DropGold = _DropGold;
	}

	// +�����ڸ� ���� ���ڴ�.
	// +�� ���׿�����(+�� ���ʰ� �������� ����ϴµ� ����Ѵ�)
	//	���� : �ڱ� �ڽ�
	//	������ : other
	//	��� : ���� ��
	Enemy operator+(const Enemy& other) const	// <- �������� ���� const�� �� �Լ����� �ɹ� ������ ������ ���ϰڴٴ� �ǹ�
	{
		// �̸��� ���ʰ��� ���
		// Health�� ��ġ��
		// AttackPower�� ���ʴ� 70%���
		// DropGold�� ��ġ��
		return Enemy(
			Name + "(��ü)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold);
	}

	// ���� �ǽ�
	// 1. Enemy -������ �����ε��ϱ�
	//		���ʿ� �ִ� �Ϳ��� �������� �� ������ ����
	
	Enemy operator-(const Enemy& other) const	
	{
		
		return Enemy(
			Name + "(��ȭ)",
			Health - other.Health * 0.5f,
			AttackPower - other.AttackPower * 0.5f,
			DropGold - other.DropGold / 2);
	}
	// 2. Enemy *������ �����ε��ϱ�
	//		������ floatŸ���̴�.
	//		Enemy operator*(float Multiplier) const { return };
	Enemy operator*(const Enemy& other) const	
	{
		
		return Enemy(
			Name + "(��ȭ)",
			Health * 2.0f,
			AttackPower * 2.0f,
			DropGold * 2);
	}
	// 3. Enemy *= ������ �����ε��ϱ�
	//		Enemy& operator*=(float Multiplier) { return };
	Enemy operator*=(const Enemy& other) const
	{

		return Enemy(
			Name + "(����Ʈ)",
			Health * other.Health,
			AttackPower * other.AttackPower,
			DropGold * other.DropGold);
	}
};

struct Weapon
{
	std::string Name = "����";
	std::string Desc = "���� ��� �̾߱�";
	float AttackPower = 10.0f;
	int Price = 100;

	//Weapon()	// ��� �ڵ����� ����
	//{
	//}	
};

void Day0912_Struct();
void Day0912_OperatorOverloading();

/// <summary>
/// �� ���� ����ϴ� �Լ�
/// </summary>
/// <param name="pEnemy">����� ��(�б� ����)</param>
void PrintEnemy(const Enemy* pEnemy);	// pEnemy�� �б� ����


//9 _12 ��������
//��ġ ǥ���� ����ü Position �����
//## �䱸����
//1. ����ü �̸��� Position���� �Ѵ�.
//2. ��� ������ int x, int y�� ������.
//3. �� ��� ������ �⺻���� 0�̾�� �Ѵ�.
//4. �� ���� ���� ���� �޾Ƽ� ��� ������ �Ҵ��ϴ� �����ڸ� �����.
//5. + �����ڸ� �����ε��Ͽ� �� Position ��ü�� ������ ��, ������ ������� ���� ����� ���� 
//���ο� Position ��ü�� �����ǵ��� �Ѵ�.
//6. �����ڵ� �����ε��Ͽ� �� Position ��ü�� ���� ��, ������ ������� �� ����� ���� 
//���ο� Position ��ü�� �����ǵ��� �Ѵ�.
//
//## ����
// �Ʒ��� ���� �ڵ尡 ���������� �����ؾ� ��
//Position p1(2, 3);
//Position p2(5, 1);
//
//Position sum = p1 + p2;   // sum.x == 7, sum.y == 4
//Position diff = p1 - p2;  // diff.x == -3, diff.y == 2

//struct Position
//{
//	int x = 0;
//	int y = 0;
//	Position(int _x, int _y) : x(_x), y(_y) {}
//
//
//	Position operator+(const Position& other)
//	{
//		return Position(x + other.x, y + other.y);
//	}
//	Position operator-(const Position& other)
//	{
//		return Position(x - other.x, y - other.y);
//	}

//};

//9 _12 ��ȭ����
//1. ����� �̷� Ż�� ���ӿ� ��� �߰��ϱ�
//2. �÷��̾��� ��ġ, HP�� �����ϴ� ����ü ����� �����ϱ�
//3. ���� HP, ���ݷ�, ������ ����ִ� ����ü ����� �����ϱ�
//4. �� ������ HP�� ���ݷ°� ������ �����ϰ� �����ϱ�
//5. �̵��� Ȯ���� HP ȸ���ϴ� ���� ������ ����Ͽ� ȸ���ϴ� ������ �����ϱ�
struct Player
{
	int HP = 200;
	int P_SpotX;
	int P_SpotY;
	int Wallet = 0;

};

struct Com
{
	
	int C_HP = rand() % 50 + 30;
	int C_Attack = rand() % 10 + 1;
	int C_Gold = rand() % 10 + 20;

};