#pragma once
class ICanBattle
{
public:
	virtual ~ICanBattle() {};

	virtual void Attack(ICanBattle* Target) = 0;
	virtual void TakeDamage(int InDamage) = 0;
	virtual void HP() = 0;

	//맴버 변수가 꼭 필요할 경우 Getter가 있다는 것을 명시
	//virtual void GetAttackPower() = 0;
};
