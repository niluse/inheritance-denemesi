#include "Sekil.h"

Sekil::Sekil()
{
    en=0;
    boy=0;
}

int Sekil::GetEn()
{
    return en;
}

int Sekil::GetBoy()
{
    return boy;
}

void Sekil::SetEn(int e)
{
    en=e;
} 

void Sekil::SetBoy(int b)
{
    boy=b;
}

void Sekil::SetEnBoy(int e,int b)
{
    SetBoy(b);
    SetEn(e);
}

void
Sekil::SetYukseklik(int y)
{
    yukseklik=y;
}

Sekil::~Sekil()
{

}