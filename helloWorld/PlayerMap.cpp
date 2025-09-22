#include "PlayerMap.h"

void PlayerMap::PrintMap() const
{
	// ��� ���
	printf("   ");
	for (int i = 0; i < Map::MapSize; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");

	// ���� ��ǥ + ���� ���� ���
	for (int y = 0; y < Map::MapSize; y++)
	{
		printf("%2d ", y);	// ���� ��ǥ
		for (int x = 0; x < Map::MapSize; x++)
		{
			switch (Cells[y][x])
			{
			default:
				break;
			}
			switch (Cells[y][x])
			{
			case CellType::Hit:
				break;
			case CellType::Miss:
				break;
			default: // Empty
				break;
				break;
			}
		}
		printf("\n");
	}
}
