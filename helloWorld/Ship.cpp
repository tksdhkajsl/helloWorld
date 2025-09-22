#include "Ship.h"

void Ship::Place(const Position* InPosition, int InSize)
{
	// �Լ��� ��ġ�ϸ鼭 ������ �ʱ�ȭ�� �Ͼ��.
	Size = InSize;
	Hits = 0;
	for (int i = 0; i < Size; i++)
	{
		Positions[i] = InPosition[i];
	}
	for (int i = Size; i < MaxShipSize; i++)
	{
		Positions[i] = Position(-1, -1);	// �Ⱦ��� ���� �Ұ����� ��ǥ�� �ʱ�ȭ
	}
}

bool Ship::CheckAndProcessHit(const Position& InAttackPos)
{
	if (IsSunk())
		return false;	// �̹� ħ���� ��� �� ó�� ���Ѵ�.

	for (int i = 0; i < Size; i++)
	{
		if (Positions[i] == InAttackPos)	// ����������
		{
			Hits++;			// �ǰ� ȸ�� ����
			return true;	// �¾Ҵٰ� ����
		}
	}

	return false;	// ������ ���� ����.
}
