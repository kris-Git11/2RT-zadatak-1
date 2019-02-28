// ConsoleApplication38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class Kutija {
private:
	int crvene, plave, zelene;
	string ime;
public:
	void upisKuglica();
	string imeKutije() { return ime; }
	double zbrojKuglica() { return crvene + plave + zelene; }
	void najviseKuglica();
	void ispis() { cout << "Kutija" << ime <<" ima "<< zbrojKuglica()<<" kuglica"; };
};
void Kutija::upisKuglica() {
	cout << "Ime "; cin >> ime;
	cout << "Crvenih ima: "; cin >> crvene;
	cout << "Plavih ima: "; cin >> plave;
	cout << "Zelenih ima: "; cin >> zelene;
}
void Kutija::najviseKuglica() {
	if (crvene > plave&&crvene > zelene)
		cout << "Najvise ima crvenih"<<endl;
	else if (plave > crvene&&plave > zelene)
		cout << "Najvise ima plavih"<<endl;
	else cout << "Najvise ima zelenih" << endl;
}

int main()
{
	Kutija K1, K2, K3;
	K1.upisKuglica();
	K1.ispis();
	K1.najviseKuglica();

    return 0;
}

