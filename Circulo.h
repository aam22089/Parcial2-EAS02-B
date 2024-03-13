#ifndef Circulo_h
#define Circulo_h
#include "Figura.h"
#include <iostream>
using namespace std;

class Circulo:public Figura
{
public:
    Circulo():Figura(){}
    Circulo(int b):Figura(b){}
};

#endif