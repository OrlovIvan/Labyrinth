#pragma once
#include "Weapon.h"
#include "Character.h"


class Hero : public Character
{
public:
	Hero(BasicParams heroParams, Weapon* weap) :
		Character(heroParams), m_weapon(weap)
	{}

private:
	size_t m_pos_x{ 0 };
	size_t m_pos_y{ 0 };

	size_t m_hitPoints{ 1 };
	size_t m_strength{ 0 };
	size_t m_armor{ 0 };
	size_t m_visionRange{ 0 };

	Weapon* m_weapon{};
};

