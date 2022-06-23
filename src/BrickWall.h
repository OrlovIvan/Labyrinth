#pragma once
#include "Wall.h"

class BrickWall :
    public Wall
{
public:
    BrickWall(size_t x, size_t y); 

    void crashTheWall();
    
private:
    void destroy();

    bool m_exist{true};
};

