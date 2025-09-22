#include "ShipManager.h"
#include "Map.h"
#include <random>

void ShipManager::PlaceAllShips(HiddenMap& InMap)
{
    static constexpr int ShipSizes[ShipTypeCount] = { 5, 4, 3, 2 }; // ���� ũ��

    // �踦 �ϳ��� ��ġ�ϱ� ����
    for (int i = 0; i < ShipTypeCount; i++)
    {
        bool IsPlaced = false;
        while (!IsPlaced) // ��ġ�� �Ϸ�� ������ while �ݺ�
        {
            int x = rand() % Map::MapSize;
            int y = rand() % Map::MapSize;
            bool IsHorizontal = rand() % 2 == 0;

            if (CanPlaceShip(x, y, ShipSizes[i], IsHorizontal, InMap))
            {
                // ��ġ�� �� ������ ��ġ ó��
                Position PlacePosition[Ship::MaxShipSize];
                for (int j = 0; j < ShipSizes[i]; j++)
                {
                    int NewX = x + (IsHorizontal ? j : 0);
                    int NewY = y + (IsHorizontal ? 0 : j);
                    InMap.SetCellType(NewX, NewY, CellType::Ship);  // �ʿ� ����ϰ�
                    PlacePosition[j] = Position(NewX, NewY);    // ��ġ ��ǥ ���� ����� ����
                }
                Ships[i].Place(PlacePosition, ShipSizes[i]);    // ���� ��ġ ó��
                IsPlaced = true;    // while ������� ǥ��
            }
        }
    }
}

bool ShipManager::ProcessAttack(const Position& InAttackPos)
{
    ShipJustSunk = false;   // �� ������ ���۵Ǿ����� �ʱ�ȭ
    for (int i = 0; i < ShipTypeCount; i++)
    {
        if (Ships[i].IsSunk())
        {
            continue; //������� ��� ��ŵ
        }

        if (Ships[i].CheckAndProcessHit(InAttackPos))
        {
            // �谡 �¾Ҵ�.
            if (Ships[i].IsSunk())
            {
                SunkShipCount++;        // ħ�� ��� ����
                ShipJustSunk = true;    // ����ɾҴٰ� ����ϱ� ����
            }
            return true;    // �¾Ҵ�.
        }
    }
    return false;   // ��������.
}

bool ShipManager::CanPlaceShip(int InX, int InY, int InSize, bool InHorizontal, const HiddenMap& InMap) const
{
    for (int i = 0; i < InSize; i++)
    {
        int NewX = InX + (InHorizontal ? i : 0);
        int NewY = InY + (InHorizontal ? 0 : i);
        if (!Map::IsValidPoition(NewX, NewY))
        {
            return false;   // �� ���� �ƴϸ� ��ġ �Ұ�
        }
        if (!InMap.IsCellEmpty(NewX, NewY))
        {
            return false;   // �ش� ���� ������� ������ ��ġ �Ұ�
        }
    }
    return true;    // ��� ĭ�� Ȯ���� ������ �ʾ��̰� ���� ����ִٴ°� Ȯ���� ������ ��ġ ����
}
