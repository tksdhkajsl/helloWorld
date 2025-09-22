#include "BattleShip.h"
#include <iostream>

BattleShip::BattleShip()
{
    // �������� ������ �����ڿ��� ��� �ʱ�ȭ ��
    EnemyFleet.PlaceAllShips(GameHiddenMap);    // ��鸸 �ʱ�ȭ
}

void BattleShip::Play()
{
    printf("������ �����մϴ�! ��� �� �Լ��� %d�� �ȿ� ħ����Ű����.\n", MaxTurns);

    while (!IsGameEnd())    // ������ ���� �ȳ����� ��� �ݺ�
    {
        PrintGameState();   // ���� ���� ���� ����ϰ�
        HandleInput();      // �Է� ó���ϱ�
        TurnRemains--;      // �� ����
    }
    PrintGameResult();      // ������ �������� ��� ���
}

bool BattleShip::Shoot(int InX, int InY)
{
    if (!Map::IsValidPoition(InX, InY))
    {
        printf("�߸��� ��ǥ�Դϴ�.\n");
        return false;
    }

    if (!GamePlayerMap.IsCellEmpty(InX, InY))
    {
        printf("�̹� ������ ��ǥ�Դϴ�.\n");
        return false;
    }

    Position AttackPos(InX, InY);
    if (EnemyFleet.ProcessAttack(AttackPos))
    {
        // �¾Ҵ�.
        GamePlayerMap.SetCellType(AttackPos, CellType::Hit);
        printf("����!\n");
        if (EnemyFleet.WasShipJustSunk())
        {
            printf("�谡 ħ���߽��ϴ�!\n");
        }
    }
    else
    {
        // ��������.
        GamePlayerMap.SetCellType(AttackPos, CellType::Miss);
        printf("���������ϴ�...\n");
    }

    return true;
}

void BattleShip::HandleInput()
{
    int x;
    int y;
    printf("���� ��ǥ�� �Է��ϼ��� (x y) : ");
    std::cin >> x >> y;
    Shoot(x, y);    // �Է¹��� ��ǥ ����
}

void BattleShip::PrintGameState() const
{
    if (IsTestMode)
    {
        GameHiddenMap.PrintMap();
    }
    GamePlayerMap.PrintMap();
    printf("���� �� �� : %d\n", TurnRemains);
    printf("���� �� �Լ��� �� : %d\n", EnemyFleet.GetAliveShipCount());
}

void BattleShip::PrintGameResult() const
{
    if (EnemyFleet.IsAllSunk())
    {
        printf("�¸�!\n");
    }
    else
    {
        printf("�й�...\n");
        GameHiddenMap.PrintMap();
    }
}
