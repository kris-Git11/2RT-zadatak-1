// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct trokut {
	float a, b, c;
};


int main()
{
	trokut y;
	int s;
	cout << "unesi stranicu a:";
	cin >> y.a;
	cout << "unesi stranicu b:";
	cin >> y.b;
	cout << "unesi stranicu c:";
	cin >> y.c;
	float opseg;
	float povrsina;
	s = ((y.a) + (y.b) + (y.c)) / 2;
	cout << "poluopseg je:" << s << endl;
	opseg = (y.a) + (y.b) + (y.c);
	povrsina = sqrt(s*(s - y.a)*(s - y.b)*(s - y.c));
	cout << "opseg je:" << opseg << endl;
	cout << "povrsina je:" << povrsina << endl;
    return 0;
}

