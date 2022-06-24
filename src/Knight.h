#pragma once
#include "Hero.h"

class Knight :
    public Hero
{
public:
    Knight(BasicParams knightParams);

    size_t getHitPoint() const override;
    void setHitPoint() const override;

private:

};

