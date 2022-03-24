#include "Point.h"

class Circle {

private:
	double radius;//半径
	Point center;//圆心

public:
    Circle();
    Circle(double x, double y, double radium);
    ~Circle();

	void setR(int r);
	double getR();
	void setCenter(int x, int y);
	Point getCenter();

	void result(Point p);

}; 
