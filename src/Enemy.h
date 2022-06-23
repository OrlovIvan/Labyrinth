#pragma once
#include "Weapon.h"

class Enemy
{
public:
	Enemy(size_t x, size_t y, size_t hp, size_t strength, size_t armor, size_t speed, Weapon* weap):
		m_pos_x(x), m_pos_y(y), m_hitPoints(hp), m_strength(strength), m_armor(armor), m_speed(speed), m_weapon(weap)
	{}

	virtual bool hit() = 0;
	virtual void move() = 0;

private:
	size_t m_pos_x{0};
	size_t m_pos_y{0};

	size_t m_hitPoints{1};
	size_t m_strength{0};
	size_t m_armor{0};
	size_t m_speed{0};
	Weapon* m_weapon{};
};

