#ifndef Figura_h
#define Figura_h
#include <iostream>
using namespace std;

class Figura
{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b);
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};
#endif

/*
    Implementa los constructores y funciones de la clase Figura.
    La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
*/



/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
*/

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
*/