#ifndef _CLASS__Marine
#define _CLASS__Marine

#include "TerranUnit.h"

class Marine : public TerranUnit
{
private:
    /* data */
public:
    virtual ~Marine();

    int GetSum(int a, int b);
};

#endif