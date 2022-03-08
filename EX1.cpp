#define e 2.7182818284590452353602874713526624977572
#include <iostream>
#include <stdio.h>

using namespace std;

double n;

double x,y;

int main() {

	cout << "Enter n: " << endl;
	cin >> n ;


	y = 1 / n;
	y = y + 1;

	x = pow(y, n);

	cout << "x = " << x << endl;

	return 0;

}