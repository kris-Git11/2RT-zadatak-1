// 07032019_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Ucenik {
private:
	string ime;
	string prezime;
	float ocjene[5];
public:
	Ucenik() {};
	Ucenik(string i, string p) { ime = i, prezime = p; };
	Ucenik(string i, string p, int o1, int o2, int o3, int o4, int o5)
	{
		ime = i, prezime = p;
		ocjene[0] = o1; ocjene[1] = o2; ocjene[2] = o3; ocjene[3] = o4; ocjene[4] = o5;
	};
	void UcitajPodatke();
	bool ProvjeraPozitivnihOcjena();
	float IzracunajProsjek();
	string VratiIme() { return ime; };
	string VratiPrezime() { return prezime; };
};

void Ucenik::UcitajPodatke()
{
	cout << "Unesi ime: ";
	cin >> ime;
	cout << "Unesi prezime: ";
	cin >> prezime;
	for (int i = 0; i < 5; i++)
	{
		cout << "Unesi " << i + 1 << ". ocjenu: ";
		cin >> ocjene[i];
	}
}
bool Ucenik::ProvjeraPozitivnihOcjena()
{
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (ocjene[i] > 1 && ocjene[i] < 6)
			a++;
	}
	if (a == 5)
		return true;
	else 
		return false;
}
float Ucenik::IzracunajProsjek()
{
	int zbroj=0;
	for (int i = 0; i < 5; i++)
		zbroj += ocjene[i];
	return zbroj / 5.;
}

int main()
{
	Ucenik ucenici[5];
	for (int i = 0; i < 3; i++)
		ucenici[i].UcitajPodatke();

	Ucenik uc("marko", "novak", 5, 4, 5, 5, 5);
	ucenici[3] = uc;
	Ucenik ucx("mateja", "horvat", 5, 3, 2, 5, 3);
	ucenici[4] = ucx;
	for (int i = 0; i < 5; i++)
	{
		if (ucenici[i].ProvjeraPozitivnihOcjena() == true)
		{
			cout << "Prosjek " << ucenici[i].VratiIme() <<" "<< ucenici[i].VratiPrezime() << " : " << ucenici[i].IzracunajProsjek() << endl;
		}
		else break;
	}
	int maxprosjek = 0;
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (ucenici[i].IzracunajProsjek() > maxprosjek)
		{
			maxprosjek = ucenici[i].IzracunajProsjek();
			a = i;
		}
	}

	return 0;
}

