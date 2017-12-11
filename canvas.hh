#ifndef CANVAS_HH
#define CANVAS_HHclass Canvas {
class Canvas{
	private:
		double wid;
		double hei;
		
		const int horP; 
		const int vertP;
		
		Point centre;
		
		std::vector<std::vector<int>> greytones;
		
	public:
		
		//constructor
		Canvas(const Point& center, double width, double height,
		int horPixels, int vertPixels) {
			centre = *center;
			
			wid = width;
			hei = height;
			
			horP = horPixels;
			vertP = vertPixels;
			
		}
		
		// get functions
		
		
		// methods
		Point coord(int i, int j) const {
			i = (double)i;
			j = (double)j;
			
			Point coordinates(i, j);
			
			return coordinates;
		}
}

#endif // CANVAS_HH
