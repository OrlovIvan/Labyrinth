#include "BrickWall.h"

BrickWall::BrickWall(size_t x, size_t y) : Wall(x, y, 'B')
{
}

void BrickWall::crashTheWall()
{
	m_exist = false;
	destroy();
}

void BrickWall::destroy()
{

}
