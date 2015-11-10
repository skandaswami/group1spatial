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
	cout << "Big Rational varaiable multiplication:"<<a * b << endl;
	cout << "Big Rational varaiable division:"<<a / b << endl;

	Poi2D p1(Number("1.0"),Number("2.0"));
	Poi2D p2(Number("2.0"),Number("3.0"));
	Poi2D p3(Number("2.0"),Number("3.0"));
	Poi2D p4(Number("5.0"),Number("6.0"));
	Poi2D p5(Number("2.0"),Number("5.0"));
	cout<<"Point p1:"<<p1<<endl;
	cout<<"Point p2:"<<p2<<endl;
	cout<<"Point p3:"<<p3<<endl;
	cout<<"Point p4:"<<p4<<endl;
	cout<<"Point p5:"<<p5<<endl;
	
	
	if(p1 < p2)
	{
		cout << "The point"<<p1<<" is less than the point "<<p2<< endl;
	}
	
	if(p4 > p1)
	{
		cout << "The point"<<p4<<" is greater than the point "<<p2<< endl;
	}
	
	if(p2 == p3)
	{
		cout << "The point"<<p2<<" is equal to the point "<<p3<< endl;
	}
	
	if(p3 <= p5)
	{
		cout << "The point"<<p3<<" is less than or equal to the point "<<p5<< endl;
	}
	if(p3 >= p5)
	{
		cout << "The point"<<p3<<" is greater than or equal to the point "<<p5<< endl;
	}
	else
	{
		cout << "The point"<<p3<<" is less than the point "<<p5<< endl;
	}
	
	
	/*unsigned int a = 4333234234234 * 22450000000000;
	cout << UINT_MAX<< endl << a << endl;
	return 0;*/
}
