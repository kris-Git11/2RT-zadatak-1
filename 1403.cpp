// 1403.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class Ucenik {
private: 
	string ime, prezime;
	int ocjena[5];
public: 
	Ucenik() {};
	Ucenik(string i, string p) { ime = i, prezime = p; };
	Ucenik(string i, string p, int o1, int o2, int o3, int o4, int o5)
	{	
		ime = i; prezime = p;
		ocjena[0] = o1;
		ocjena[1] = o2;
		ocjena[2] = o3;
		ocjena[3] = o4;
		ocjena[4] = o5;
	};
	void UpisiUcenika()
	{
		cout << "Upisi ime ucenika: ";
		cin >> ime;
		cout << "Upisi prezime: ";
		cin >> prezime;
		cout << "Unesi 5 zakljucnih ocjena: ";
		for (int i = 0; i < 5; i++)
			cin >> ocjena[i];
	}
	bool DaLiJePozitivno()
	{
		int pozitivne = 0;
		for (int i = 0; i < 5; i++)
		{
			if (ocjena[i] > 1 && ocjena[i] < 6)
				pozitivne++;
		}
		if (pozitivne == 5)
			return true;
		else
			return false;
	}
	float IzracunajProsjek()
	{
		int zbroj = 0; double prosjek;
		for (int i = 0; i < 5; i++)
			zbroj = zbroj + ocjena[i];
		prosjek = zbroj / 5.;
		return prosjek;
	}
	string VratiIP() { return ime + " " + prezime; }
};

int main()
{

	Ucenik ucenik[5];
	string najbolji; double najprosjek=0;
	for (int i = 0; i < 3; i++)
	{
		ucenik[i].UpisiUcenika();
		if (ucenik[i].DaLiJePozitivno() == true)
		{
			
			cout <<"Prosjek: "<< ucenik[i].IzracunajProsjek() << endl;
		}
	}
	Ucenik uc4("marko", "novak", 3, 4, 5, 3, 4);
	ucenik[3] = uc4;
	Ucenik uc5("matija", "horvat", 5, 4, 3, 4, 5);
	ucenik[4] = uc5;
	for (int i = 3; i < 5; i++)
	{
		if (ucenik[i].DaLiJePozitivno() == true)
		{

			cout <<"Prosjek ucenika "<< ucenik[i].VratiIP()<<"  "<<ucenik[i].IzracunajProsjek() << endl;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (ucenik[i].DaLiJePozitivno() == true) {
			ucenik[i].IzracunajProsjek();
			if (ucenik[i].IzracunajProsjek() > najprosjek)
			{
				najprosjek = ucenik[i].IzracunajProsjek();
				najbolji= ucenik[i].VratiIP();
			}
		}
	}
	cout << "Najbolji ucenik je: " << najbolji << " s prosjekom " << najprosjek<<endl;
    return 0;
}

