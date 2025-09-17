#pragma once
class ICanBattle
{
public:
	virtual ~ICanBattle() {};

	virtual void Attack(ICanBattle* Target) = 0;
	virtual void TakeDamage(int InDamage) = 0;
	virtual void HP() = 0;

	//�ɹ� ������ �� �ʿ��� ��� Getter�� �ִٴ� ���� ���
	//virtual void GetAttackPower() = 0;
};
