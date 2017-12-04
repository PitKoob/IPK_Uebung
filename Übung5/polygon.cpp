#include <vector>
#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::vector;
using std::endl;


struct Point
{
	double x;
	double y;
};
	
struct Polygon
{
	vector<Point> vect;
};
	
	
Polygon construct(const vector<double>& vect_x, const vector<double>& vect_y)
{	
	Polygon result_Poly;
	Point coords;
	
	for (unsigned int i = 0; i < vect_x.size(); i++)
	{
		coords.x = vect_x[i];
		coords.y = vect_y[i];
		result_Poly.vect.push_back(coords);
	
	}	
	return result_Poly;
}

double volume(const Polygon & poly)
{
	double v = 0;
	int size = poly.vect.size();
	for (int i = 0; i < size-1; i++)
	{
		v += 0.5*(poly.vect[i].x*poly.vect[i+1].y-poly.vect[i+1].x*poly.vect[i].y);
	}
		v += 0.5*(poly.vect[size-1].x*poly.vect[0].y-poly.vect[0].x*poly.vect[size-1].y);
	return v;		
}

int main()
{
	double n = 2;
	vector<double> v_x(n);
	vector<double> v_y(n);
	double pi = M_PI;
	
	for (double i = 0; i < n; i++)
	{
		v_x[i] = cos(i/n*2*pi);
		v_y[i] = sin(i/n*2*pi);
	}
	
	Polygon regelm = construct(v_x,v_y);

	cout << n/2*sin(2*pi/n) << endl;
	cout << volume(regelm) << endl;

	
	


	return 0;
}
