#include "Figura.h"
#include <iostream>
using namespace std;

Figura::Figura()
{
    this->b=0;
    this->h=0;
    this->p=0;
}

Figura::Figura(int b, int h)
{
    this->b=b;
    this->h=h;
}

Figura::Figura(int b)
{
    this->b=b;
}

void Figura::setPerimetro(float a)
{
    this->p=a;
}

float Figura::getPerimetro()
{
    cout << this->p << endl;
}
