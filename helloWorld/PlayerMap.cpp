#include "PlayerMap.h"

void PlayerMap::PrintMap() const
{
	// »ó´Ü Ãâ·Â
	printf("   ");
	for (int i = 0; i < Map::MapSize; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");

	// ¿ÞÂÊ ÁÂÇ¥ + ¸íÁß ¿©ºÎ Ãâ·Â
	for (int y = 0; y < Map::MapSize; y++)
	{
		printf("%2d ", y);	// ¿ÞÂÊ ÁÂÇ¥
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
