#include "TerranUnit.h"

TerranUnit::TerranUnit(int hp)
{
    _hp = hp;
}

TerranUnit::~TerranUnit()
{
}

int TerranUnit::GetHP()
{
    return _hp;
}