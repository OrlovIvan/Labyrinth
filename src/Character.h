#pragma once

struct BasicParams
{
	size_t m_pos_x{ 0 };
	size_t m_pos_y{ 0 };

	size_t m_hitPoints{ 1 };
	size_t m_maxHitPoints{ 1 };
	size_t m_strength{ 0 };
	size_t m_armor{ 0 };
	size_t m_visionRange{ 0 };
};

enum class Direction
{
	up = 0,
	right,
	down,
	left
};

class Character
{
public:
	Character(BasicParams newParams);
	~Character() = default;

	virtual size_t getHitPoint() const = 0;
	virtual void setHitPoint() const = 0;

	virtual void move(Direction dir) = 0;
	virtual bool attack(Direction dir) = 0;
private:

	BasicParams params;
};

