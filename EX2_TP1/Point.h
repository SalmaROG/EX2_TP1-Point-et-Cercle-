#pragma once
class Point
{
private:
	double x;
	double y;
public:
	//Constructeur avec parametres
	Point(double x , double y );

	//Constructeur de recopie
	Point(const Point& p);

	//Afficher 
	void afficher() const;

	//Calculer la distance entre deux points
	double distance(const Point& p) const;

	//Translater un point
	void translate(double dx, double dy);

	//Opérateur "=="
	bool operator ==(const Point& p)const;

	//Destructeur
	~Point();

};

