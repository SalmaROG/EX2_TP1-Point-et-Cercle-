#include "Cercle.h"
#include "Point.h"
#include <iostream>
using namespace std;
const double Cercle::PI = 3.14;


Cercle::Cercle(int id, double r, Point* p) :id(id), rayon(r), centre(p)
{
	cout << "constructeur de la Cercle " << endl;
}

Cercle::Cercle(Cercle& c):id(c.id), rayon(c.rayon), centre(c.centre)
{
}

void Cercle::Afficher() const
{
	cout << "L'id est: " << this->id << endl;
	cout << "Le rayon est : " << this->rayon << endl;
	cout << "Le centre est : " << endl;
	this->centre->afficher();
}

void Cercle::UpdateRadius(double r)
{
	this->rayon += r;
}



void Cercle::translate(double dx, double dy)
{
	this->centre->translate(dx, dy);
}

bool Cercle::operator==(const Cercle& c) const
{
	return ((this->centre == c.centre) && (this->rayon == c.rayon));

}

bool Cercle::appart(Point& p) const
{
	return (this->centre->distance(p) <= this->rayon);
}



double Cercle::surface() const
{

	return pow(this->rayon, 2) * PI;

}

double Cercle::perimetre() const
{
	return  2 * PI * this->rayon;

}

Cercle::~Cercle()
{
	cout << "Destructeur de la Cercle " << endl;
}

