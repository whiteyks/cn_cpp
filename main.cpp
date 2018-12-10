#include <iostream>
#include "TerranUnit.h"
#include "Marine.h"
using namespace std;

int main()
{
    TerranUnit *m = new Marine();
    cout << m->GetHP() << endl;

    
    
    cout << "print any key to exit." << endl;
    getwchar();
    return 0;
}
