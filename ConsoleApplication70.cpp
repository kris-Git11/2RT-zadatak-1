// ConsoleApplication70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

/*class trokut {
private:
	int a, b, c,n;
public:
	double izracunajPovrsinu();
	double izracunajOpseg() { return a + b + c; };
	bool jelitrokut() {
		if ((a + b) > c && (a + c) > b && (b + c) > a) return 1;
		else
			return 0;
	};
	void ucitajstranice();
	void najvecastranice();


};
void trokut::ucitajstranice(){ 
	cout << "a:"; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}
double trokut::izracunajPovrsinu() {
	double s = (a + b + c) / 2.;
	return sqrt(s*(s - a)*(s - b)*(s - c));


}
void trokut::najvecastranice() {
	


}

int main()
{
	trokut t1;
	t1.ucitajstranice();
	if (t1.jelitrokut()) {
		cout << "Opseg je " << t1.izracunajOpseg() << endl;
		cout << "Povrsina je " << t1.izracunajPovrsinu() << endl;
	}
	else
		cout << "Stranice trokuta nisu dobro zadane." << endl;
	t1.najvecastranice();
	
	
	
	return 0;
}*/


class kutija {
private:
	int c, p, z;
	string ime;

public:
	void ucitaj();
	int izracunajukupno();
	void ispis() { cout << "kutija " << ime <<" "<< izracunajukupno() << " kuglica"<<endl; }


};

void kutija::ucitaj() {
	cout << "ime: "; cin >> ime;
	cout << "crvene: "; cin >> c;
	cout << "plave: "; cin >> p;
	cout << "zelene: "; cin >> z;
}

int kutija::izracunajukupno() {
	return c + p + z;

}


int main(){
	kutija k1,k2,k3;
	k1.ucitaj();
	k1.ispis();
	k2.ucitaj();
	k2.ispis();
	k3.ucitaj();
	k3.ispis();




	
	
	
	return 0;
}

