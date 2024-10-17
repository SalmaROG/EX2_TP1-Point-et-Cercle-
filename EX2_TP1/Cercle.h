#pragma once
#include "Point.h" 

class Cercle
{
private:
	int id;
	double rayon;
	Point* centre;
	const static double PI;
public:

	//Constructeur avec parametres
	Cercle(int id, double r, Point* p);

	//Constructeur de recopie
	Cercle(Cercle& c);

	//Afficher 
	void Afficher() const;

	//Modifier le rayon
	void UpdateRadius(double r);

	//Translater le cercle
	void translate(double dx, double dy);

	//Opérateur "=="
	bool operator==(const Cercle& c) const;

	//L'appartenance
	bool appart(Point& p)const;

	//Calculer surface
	double surface() const;

	//Calculer surface
	double perimetre() const;

	//Destructeur
	~Cercle();
};

