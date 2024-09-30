// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); // прототип

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = h(pow(s, 2), 1 + t) + h(1, s * t);

	cout << "c = " << c << endl;

	return 0;
}

double h(const double a, const double b)
{
	double f = pow(a, 2) + pow(b, 2);
	if (f == 0) {
		return 0;
	}
	return (a + b + pow(a, 2) * pow(b, 2)) / f;
}