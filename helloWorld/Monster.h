#pragma once
#include<string>

//1. Monster Ŭ���� ���� �����
//	�߻�ȭ
//2. Monster Ŭ���� �����
//	�⺻ �Ӽ� : �̸�, ü��, ���ݷ�
//	���� �Լ� : Attack()
//3. ĸ��ȭ
//	�� �Ӽ��� protected�� �����
//	�⺻ �Ӽ��� �����ڿ��� ����
//	���� Getter�����
//4. ���
//	���, ��ũ, ����, ���̷��� ��� �����
//	���� ��ų �����
//5. �̷� Ż�� ���� �����ϱ�
//	���� Ŭ����ȭ�ϱ�(Monster�� ��ü)
//	�÷��̾� Ŭ���� ����� �����ϱ�
//	���� �÷��̾��� �θ��� Actor Ŭ���� �����
class Monster
{
public:
	Monster() = default;
	Monster(std::string InName)
		: MName(InName)
	{
	}

	//�б� ������ 
	inline const std::string& GetName() const { return MName; }
	inline const float GetHealth() const { return Health; }
	inline const float GetDamage() const { return Damage; }
	inline const int GetGold() const { return Gold; }


protected:
	void Attack();

	std::string MName = "����";
	float Health = 0.0f;
	float Damage = 0.0f;
	int Gold = 0;

	Monster(const char* InName); //������
};

