// ConsoleApplication55.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

struct trokut
{
	double as, bs, cs;

};


double opseg(double a, double b, double c) {
	double r;
	r = a + b + c;
	return r;
}

double povrsina(double a, double b, double c) {

	double e;
	e = sqrt(((a + b + c) / 2)*(((a + b + c) / 2) - a)*(((a + b + c) / 2) - b)*(((a + b + c) / 2) - c));
	return e;




}

int main()
{
	trokut str;
	char op;
	cout << "unesi stranice";
	cin >> str.as;
	cin >> str.bs;
	cin >> str.cs;

	cout << "opseg ili povrsina: o/p" << endl;
	cin >> op;
	if (op = "o") {
		opseg(str.as, str.bs, str.cs);
		cout << opseg;
	}
	else {
		povrsina(str.as, str.bs, str.cs);
		cout << povrsina;
	}



	return 0;
}