#pragma once
#include <cstdint>
#include <cstdio>
//#include <stdint.h>
#include "Position.h"

using uint8 = uint8_t;

enum class CellType : uint8	// �ʿ� ��ġ�Ǵ� �͵��� ������ ��Ÿ���� enum. 8bit�� ǥ��
{
	Empty = 0,	// ��ĭ�̴�.
	Ship,		// �谡 ��ġ�Ǿ� �ִ�.
	Hit,		// �����ߴ�.
	Miss		// ��������.
};

class Map
{
public:
	static constexpr int MapSize = 10;	// �� ũ��. ���� ���������� �����Ǿ� ������ �̷��� ����.

	Map()
	{
		for (int y = 0; y < MapSize; y++)
		{
			for (int x = 0; x < MapSize; x++)
			{
				Cells[y][x] = CellType::Empty;	// �ϴ��� ���� ��ĭ���� ����
			}
		}
	}
	virtual ~Map() = default;

	// ���� ����ϴ� �Լ�. 
	//	��ӹ��� Ŭ�������� �ݵ�� �����ؾ��Ѵ�.(��³����� �ٸ��ϱ�)
	//	Map�� �߻� Ŭ������ ���� �ν��Ͻ�ȭ ����Ű�� �Ѵ�(���� ���ӿ����� �����ϱ�)
	virtual void PrintMap() const = 0;

	//// ������ ��ǥ�� ������ �����ϴ� �Լ�
	//inline CellType GetCellType(int InX, int InY) const
	//{
	//	if (IsValidPoition(InX, InY) == false)
	//	{
	//		return CellType::Empty;	// �� ������ ����� �׳� ������� ó��
	//	}
	//	return Cells[InY][InX];
	//}
	//inline CellType GetCellType(Position& InPosition) const
	//{
	//	return GetCellType(InPosition.x, InPosition.y);
	//}

	// ������ ��ǥ�� ���� ����ִ��� Ȯ���ϴ� �Լ�(ĸ��ȭ�� ���� �ִ��� �����͸� ����� ���� ���� ����)
	inline bool IsCellEmpty(int InX, int InY) const
	{
		if (IsValidPoition(InX, InY))
			return Cells[InY][InX] == CellType::Empty;
		return false;
	}

	// ������ ��ǥ�� ���� �����ϴ� �Լ�
	inline void SetCellType(int InX, int inY, CellType InType)
	{
		if (IsValidPoition(InX, inY))
		{
			Cells[inY][InX] = InType;
		}
	}
	inline void SetCellType(Position InPosition, CellType InType)
	{
		SetCellType(InPosition.x, InPosition.y, InType);
	}

	// ��ǥ�� �� ���� ������ üũ�ϴ� �Լ�
	//	��Ÿ�԰��� �ʿ� ���� ������ static���� �ϳ��� �����ϰ� �����.
	inline static bool IsValidPoition(int InX, int InY)
	{
		return InX >= 0 && InX < MapSize && InY >= 0 && InY < MapSize;
	}

protected:
	// ���� ����
	CellType Cells[MapSize][MapSize];
};