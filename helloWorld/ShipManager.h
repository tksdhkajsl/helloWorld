#pragma once
#include "Ship.h"
#include "HiddenMap.h"
#include "Position.h"

// �� �Լ����� ��ġ, �ǰ�ó��, ���� ���� ����� ó��
class ShipManager
{
public:
	ShipManager() = default;

	// ��� �Լ��� �ʿ� ��ġ
	void PlaceAllShips(HiddenMap& InMap);

	// Ư�� ��ǥ�� ���� ���� ó��. �ǰݵǸ� true
	bool ProcessAttack(const Position& InAttackPos);

	// ��� �谡 ħ���ߴ��� Ȯ���ϴ� �Լ�
	inline bool WasShipJustSunk() const { return ShipJustSunk; }

	// ��� �谡 ħ���ߴ��� Ȯ���ϴ� �Լ�
	inline bool IsAllSunk() const { return SunkShipCount >= ShipTypeCount; }

	// ħ������ ���� ���� ��
	inline int GetAliveShipCount() const { return ShipTypeCount - SunkShipCount; }

private:
	static constexpr int ShipTypeCount = 4;	// �Լ��� ������

	// �� �Լ���
	Ship Ships[ShipTypeCount];

	// ħ���� ���� ��
	int SunkShipCount = 0;

	// ���� �ֱ� �������� �Լ��� ħ���ߴ��� ����(�谡 ����ɾ��� �� ��� üũ��)
	bool ShipJustSunk = false;

	// �Լ��� ��ġ �������� Ȯ���ϴ� ���� �Լ�.
	bool CanPlaceShip(int InX, int InY, int InSize, bool InHorizontal, const HiddenMap& InMap) const;
};

