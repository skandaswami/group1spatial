#include <iostream>
#include "Number.h"
#include "RobustGeometricPrimitives2D.h"
#include "BigRational.h"
#include "BigInteger.h"

using namespace std;

int main()
{

	Number num("5.1234");
	BigInteger a1("2");
	BigInteger a2("3");
	BigRational a("2", "3");
	BigRational b("3", "5");
	bool answer = a == b;
	cout << a * b << endl;
	cout << a / b << endl;
	Number a3("5.1234");
	cout << a3 << endl;
	Number b3("3.1234");
	Poi2D p(a3, b3);
	cout << p << endl;
	/*unsigned int a = 4333234234234 * 22450000000000;
	cout << UINT_MAX<< endl << a << endl;
	return 0;*/
}
