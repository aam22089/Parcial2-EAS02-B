#ifndef Rectangulo_h
#define Rectangulo_h
#include "Figura.h"
#include <iostream>
using namespace std;

class Rectangulo:public Figura
{
public:
    Rectangulo():Figura(){}
    Rectangulo(int b, int h):Figura(b, h){}
};

#endif