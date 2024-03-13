#ifndef Cuadrado_h
#define Cuadrado_h
#include "Figura.h"
#include <iostream>
using namespace std;

class Cuadrado:public Figura
{
public:
    Cuadrado():Figura(){}
    Cuadrado(int b):Figura(b){}
};

#endif
/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Calcular y asignar el perímetro del cuadrado.
*/