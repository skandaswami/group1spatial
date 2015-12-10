#include <iostream>
#include "Number.h"
#include "RobustGeometricPrimitives2D.h"
#include "BigRational.h"
#include "BigInteger.h"

using namespace std;

int main()
{

	
	// vector<Poi2D> points2 = { Poi2D(Number("2.0"), Number("10.0")),Poi2D(Number("4.0"), Number("12.0")), Poi2D(Number("4.0"), Number("14.0")),Poi2D(Number("8.0"), Number("14.0")),Poi2D(Number("8.0"), Number("1.0")),Poi2D(Number("1.0"), Number("1.0")),Poi2D(Number("1.0"), Number("3.0")),Poi2D(Number("6.0"), Number("3.0")) ,Poi2D(Number("6.0"), Number("4.0")),Poi2D(Number("2.0"), Number("4.0")),Poi2D(Number("2.0"), Number("6.0")),Poi2D(Number("6.0"), Number("8.0"))};
	// SimplePolygon2D testpolygon(points2);
	// Poi2D pi1 = Poi2D(Number("4.0"), Number("10.0"));

	vector<Poi2D> points2 = { Poi2D(Number("2.0"), Number("10.0")),Poi2D(Number("4.0"), Number("12.0")), Poi2D(Number("4.0"), Number("14.0")),Poi2D(Number("8.0"), Number("14.0")),Poi2D(Number("8.0"), Number("1.0")),Poi2D(Number("1.0"), Number("1.0")),Poi2D(Number("1.0"), Number("3.0")),Poi2D(Number("6.0"), Number("3.0")) ,Poi2D(Number("6.0"), Number("4.0")),Poi2D(Number("2.0"), Number("4.0")),Poi2D(Number("2.0"), Number("6.0")),Poi2D(Number("6.0"), Number("8.0"))};
	SimplePolygon2D testpolygon(points2);
	Poi2D pi1 = Poi2D(Number("4.0"), Number("10.0"));
	cout <<"polygon inside or not test----"<<simplePointInsideSimplePolygon(pi1, testpolygon)<<"----"<<endl;
	getchar();
	return 0;

}
