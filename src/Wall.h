#pragma once

class Wall
{
public:
	Wall(size_t x, size_t y, char sym) : pos_x(x), pos_y(y), symbol(sym) {};
	virtual void setPosition(size_t x, size_t y) = 0;
	void placeTheWall();
private:
	size_t pos_x;
	size_t pos_y;
	char symbol{};
};