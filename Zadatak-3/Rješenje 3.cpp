// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

class Kutija {
private:
	int c, p, z;
	string ime;
public:
	double izracunajUkupanBroj() { return c + p + z; };
	void ucitajkuglice();
	int izracunajukupno;
	void ispis() { cout << " kutija: " << ime<<" " << izracunajUkupanBroj() << " kuglica "; };
};

void Kutija::ucitajkuglice() {
	cout << "ime :  "; cin >> ime;
	cout << "CRVENE: "; cin >> c;
	cout << "PLAVE: "; cin >> p;
	cout << "ZELENE: "; cin >> z;
}

int main()
{
	Kutija K1;
	Kutija K2;
	Kutija K3;

	K1.ucitajkuglice();
	K2.ucitajkuglice();
	K3.ucitajkuglice();
	K1.ispis();
	K2.ispis();
	K3.ispis();


	return 0;
}