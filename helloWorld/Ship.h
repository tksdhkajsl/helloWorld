#pragma once
#include "Position.h"
class Ship
{
public:
	// �谡 ���� �� �ִ� �ִ� ũ��
	static constexpr int MaxShipSize = 5;

	Ship() = default;

	// �Լ� ��ġ�ϴ� �Լ�(InPosition�� ��ġ�� ��ǥ���� �����ּ�, InSize�� ��ǥ���� ����)
	void Place(const Position* InPosition, int InSize);

	// ���� ���θ� üũ�ϰ� ���� ó���� �ϴ� �Լ�
	// return : ���� ����(�̹� ħ���� ��� ���߾ȵ� ������ ���)
	// InAttackPos : ������ ���� ��ǥ
	bool CheckAndProcessHit(const Position& InAttackPos);

	// ���� ȸ���� ������� ũ�ų� ������ �� ��� ���� �ɾҴ�.
	inline bool IsSunk() const { return Hits >= Size; }

private:
	// ���� ũ��
	int Size = 0;

	// �谡 ��ġ�� ��ǥ��(���� ũ�⿡ ���� ����Ǵ� �κ��� ������ ���� ���Ǽ��� ���� ����)
	Position Positions[MaxShipSize];

	// ���� ȸ��
	int Hits = 0;
};

