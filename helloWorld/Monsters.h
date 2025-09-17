#pragma once
#include"Monster.h"
#include<string>
class Goblin : public Monster
{
public:
	Goblin() = default;
	void GoblinInfo();
	void SpeedUp();

	Goblin(std::string InName)
		: Monster(InName)
	{
		

	}

};

class Orc : public Monster
{
public:
	Orc() = default;
	void OrcInfo();
	void Berserk();

	Orc(std::string InName)
		: Monster(InName)
	{

	}

};

class Zombie : public Monster
{
public:
	Zombie() = default;
	void ZombieInfo();
	void Poison();

};

class Skeleton : public Monster
{
public:
	Skeleton() = default;
	void SkeletonInfo();
	void Recover();

};

