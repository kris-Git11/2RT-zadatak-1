// ConsoleApplication61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

struct trokut
{
	float a;
	float b;
	float c;
};

int main()
{
	trokut a;
	cout << "Unesi stranicu a" << endl;
	cin >> a.a;
	cout << "Unesi stranicu b" << endl;
	cin >> a.b;
	cout << "Unesi stranicu c" << endl;
	cin >> a.c;

	float opseg = (a.a) + (a.b) + (a.c);
	float povrsina;
	float s = opseg / 2;
	cout <<"opseg je : "<< opseg << endl;
	povrsina = sqrt(s*(s - a.a)*(s - a.b)*(s - a.c));
	cout << "povrsina je : " << povrsina << endl;
	
	

	

}

