#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point(double x, double y) :x(x), y(y)
{
	cout << "constructeur du Point " << endl;
}

Point::Point(const Point& p) :x(p.x), y(p.y)
{
	cout << "constructeur de recopie " << endl;
}

void Point::afficher() const
{
	cout << "x: " << this->x << endl;
	cout << "y: " << this->y << endl;
}

double Point::distance(const Point& p) const
{
	double dis = sqrt(pow((this->x - p.x), 2) + pow((this->y - p.y), 2));
	return dis;
}

void Point::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;
}

bool Point::operator==(const Point& p) const
{
	return ((this->x == p.x) && (this->y == p.y));

}

Point::~Point()
{
	cout << "Destructeur du Point " << endl;
}

