#include "Character.h"

Character::Character(BasicParams newParams)
{
	params.m_pos_x = newParams.m_pos_x;
	params.m_pos_y = newParams.m_pos_y;
	params.m_hitPoints = newParams.m_hitPoints;
	params.m_strength = newParams.m_strength;
	params.m_armor = newParams.m_armor;
	params.m_visionRange = newParams.m_visionRange;
}

