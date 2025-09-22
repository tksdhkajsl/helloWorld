#include "HiddenMap.h"

void HiddenMap::PrintMap() const
{
	// ��� ���
	printf("�� �Լ� ��ġ : \n");
	printf("   ");
	for (int i = 0; i < Map::MapSize; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");

	// ���� ��ǥ + �� ��ġ ����
	for (int y = 0; y < Map::MapSize; y++)
	{
		printf("%2d ", y);	// ���� ��ǥ
		for (int x = 0; x < Map::MapSize; x++)
		{
			if (Cells[y][x] == CellType::Ship) // �� ���¿� ���� �� ��ġ ���� ���
			{
				printf(" S ");
			}
			else
			{
				printf(" . ");
			}
		}
		printf("\n");
	}
}
