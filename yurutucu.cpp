#include "Prizma.h"
#include <iostream>

using namespace std;

int main()
{
    int hacim;

    Prizma dikdPriz;

    dikdPriz.SetEnBoy(12,4);
    dikdPriz.SetYukseklik(3);
    hacim=dikdPriz.Hacim();

    cout<<"hacim:"<<hacim<<endl;

    return 0;
}