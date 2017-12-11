#ifndef POINT_HH
#define POINT_HH

class Point {
private:
	double x;
	double y;
	
public:

	 // constructor initializer list
	Point() : x(0), cy(0) {};
	Point(double nx, double ny) : x(nx), y(ny) {};
	
	// get functions
	double x() const;
	double y() const;
};

#endif // POINT_HH
