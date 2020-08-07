// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp

#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly",8);
    lacksDMA ballon("red","Blimpo",4);
    hasDMA map ("Meractor","Buffalo Keys",5);

    cout << shirt << endl;
    cout << ballon << endl;
    cout << map << endl;
    lacksDMA baloon2(ballon);
    hasDMA map2; 
    map2 = map;
    cout << baloon2 << endl;
    cout << map2 << endl;
    return 0;
}