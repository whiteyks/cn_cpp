#ifndef _HEADER__TerranUnit
#define _HEADER__TerranUnit

class TerranUnit
{
private:
    int _hp;
public:
    TerranUnit(int hp = 50);
    virtual ~TerranUnit();

    int GetHP();
};

#endif