#pragma once
#include "HiddenMap.h"
#include "PlayerMap.h"
#include "ShipManager.h"
#include "Position.h"

class BattleShip
{
public:
	BattleShip();
	void Play();

private:
	// �ִ� �� ��
	static constexpr int MaxTurns = 50;

	// �����ϴ� �Լ�
	bool Shoot(int InX, int InY);

	// �Է� ó���ϴ� �Լ�
	void HandleInput();

	// ���� ���� ���� ���(�÷��̾��, ������, ���� ��� ��)
	void PrintGameState() const;

	// ���� ��� ���
	void PrintGameResult() const;

	// ������ ���������� üũ(���� �� �ǰų� ���� ��� ħ��)
	inline bool IsGameEnd() const { return TurnRemains <= 0 || EnemyFleet.IsAllSunk(); }

	// �谡 ��ġ�Ǵ� ��(�÷��̾�� �Ⱥ���)
	HiddenMap GameHiddenMap;

	// ���� ����� ����Ǵ� ��(�÷��̾ ���� ��)
	PlayerMap GamePlayerMap;

	// �� �Լ����� �����ϴ� ��ü
	ShipManager EnemyFleet;

	// ���� �� ��
	int TurnRemains = MaxTurns;

	// �׽�Ʈ ��� ����(������� �����ش�)
	bool IsTestMode = false;
};

