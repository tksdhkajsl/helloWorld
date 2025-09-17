#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	virtual void Move() override; 
	virtual void MakeSound() override;

	Dog() = default;
	Dog(std::string InName) : Animal(InName) {};
	virtual ~Dog() {};

};

