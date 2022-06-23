#pragma once
class Weapon
{
public:
	Weapon(size_t ran, size_t pow) : range(ran), power(pow) {};

	virtual bool hit() = 0;
private:
	size_t range;
	size_t power;
	char symbol{};
};

