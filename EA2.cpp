#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
using namespace std;


int main () {

    Cuadrado s(5);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Circulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}