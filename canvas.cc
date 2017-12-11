#include "canvas.hh"
#include "point.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels) {
	centre = *center;

	wid = width;
	hei = height;
	
	horP = horPixels;
	vertP = vertPixels;
			
}
		
// get functions
		
		
// methods
Point Canvas::coord(int i, int j) const {
	i = (double)i;
	j = (double)j;
		
	Point coordinates(i, j);
		
	return coordinates;
}


