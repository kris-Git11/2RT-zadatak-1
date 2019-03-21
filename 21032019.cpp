// 21032019.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class Razlomak {
private:
	int brojnik, nazivnik;
public:
	Razlomak(); //konstruktor bez arg.
	Razlomak(int, int); //konstruktor s arg.
	Razlomak operator+ (const Razlomak&); //za zbrajanje razlomka
	Razlomak operator- (const Razlomak&);
	Razlomak operator* (const Razlomak&);
	Razlomak operator/ (const Razlomak&);
	Razlomak operator= (const Razlomak&); //za pridruzivanje razlomka
	Razlomak operator! (); //za skracivanje razlomka
	void prikazi_podatke();
};
Razlomak::Razlomak()
{ 
	brojnik = 1, nazivnik = 1; 
}
Razlomak::Razlomak(int br, int naz)
{
	brojnik = br, nazivnik = naz;
}
Razlomak Razlomak :: operator= (const Razlomak& r) 
{
	brojnik=r.brojnik;
	nazivnik = r.nazivnik;
	return *this;
}
Razlomak Razlomak :: operator+ (const Razlomak& pribrojnik) 
{
	Razlomak temp;
	temp.brojnik = brojnik * pribrojnik.nazivnik + pribrojnik.brojnik*nazivnik;
	temp.nazivnik = nazivnik * pribrojnik.nazivnik;
	return temp;
}
Razlomak Razlomak :: operator- (const Razlomak& oduzimatelj)
{
	Razlomak temp;
	temp.brojnik = brojnik * oduzimatelj.nazivnik - oduzimatelj.brojnik*nazivnik;
	temp.nazivnik = nazivnik * oduzimatelj.nazivnik;
	return temp;
}
Razlomak Razlomak :: operator* (const Razlomak& mnozitelj)
{
	Razlomak temp;
	temp.brojnik = brojnik * mnozitelj.brojnik;
	temp.nazivnik = nazivnik * mnozitelj.nazivnik;
	return temp;
}
Razlomak Razlomak :: operator/ (const Razlomak& djelitelj)
{
	Razlomak temp;
	temp.brojnik = brojnik * djelitelj.nazivnik;
	temp.nazivnik = nazivnik * djelitelj.brojnik;
	return temp;
}
Razlomak Razlomak :: operator! ()
{
	int najmanji = 0;
	if (nazivnik < brojnik)
		najmanji = brojnik;
	else if (nazivnik > brojnik)
		najmanji = nazivnik;
	else najmanji = brojnik;
	for (int i = najmanji; i > 0; i--)
	{
		if (brojnik%i == 0 && nazivnik%i == 0)
		{
			brojnik = brojnik / i;
			nazivnik = nazivnik / i;
			break;
		}
	}
	return *this;
}
void Razlomak::prikazi_podatke() 
{
	cout << brojnik << "/" << nazivnik << endl;
}

int main() {
	Razlomak r1(4, 100), r2(8,10), prvi, drugi;

	prvi = r1;
	drugi = r2;

	Razlomak r = r1 + r2;
	r1.prikazi_podatke();
	cout << "+";
	r2.prikazi_podatke();
	cout << "=";
	r = !r;
	r.prikazi_podatke();

	Razlomak rm = r1 - r2;
	r1.prikazi_podatke();
	cout << "-";
	r2.prikazi_podatke();
	cout << "=";
	rm = !rm;
	rm.prikazi_podatke();

	Razlomak rmn = r1 * r2;
	r1.prikazi_podatke();
	cout << "*";
	r2.prikazi_podatke();
	cout << "=";
	rmn = !rmn;
	rmn.prikazi_podatke();

	Razlomak rdj = r1 / r2;
	r1.prikazi_podatke();
	cout << "/";
	r2.prikazi_podatke();
	cout << "=";
	rdj = !rdj;
	rdj.prikazi_podatke();

	Razlomak r4(120, 100);
    !r4;
	r4.prikazi_podatke();
	return 0;
}
