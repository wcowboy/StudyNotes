#include<iostream>
#include<stdlib.h>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int b, int c) {
	return a + b + c;
}

double add(double a, double b) {
	return a + b;
}

int main() {
	int a = 10, b = 10, c = 30;
	double x = 10.2, y = 19.3;
	cout << "a + b = " << add(a, b) << endl;		
	cout << "a + b + c = " << add(a, b, c) << endl;
	cout << "x + y = " << add(x, y) << endl;
	system("pause");
}