#include <iostream>
#include "Cercle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point* p1 = new Point(2.0, 3.0);
    Cercle* c1 = new Cercle(1, 4, p1);
    c1->Afficher();
    double s, p;
    s = c1->surface();
    p = c1->perimetre();
    cout << "Surface de la Cercle: " << s << " ,Perimetre de la Cercle:" << p << endl;
    delete c1;
    delete p1;
    return 0;
}


