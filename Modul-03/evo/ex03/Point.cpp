#include <math.h>
#include "Point.hpp"

Point::Point() : x(0), y(0){
	std::cout << "Point's default constructor called" << std::endl;
}

Point::Point(const Fixed _x, const Fixed _y) : x(_x), y(_y){
}

Point::Point(const Point &oth) : x(oth.x), y(oth.y){
}

Point::~Point(){
}

Point &Point::operator=(Point const &obj)
{
	(Fixed) this->x = (Fixed)obj.x;
	(Fixed) this->y = (Fixed)obj.y;
	return *this;
}

Fixed	Point::getX()
{
	return (this->x);
}

Fixed	Point::getY()
{
	return (this->y);
}

float	find_area(Point l, Point m, Point n)
{
	float fi;

	fi = (((l.getX().toFloat() * m.getY().toFloat()) + (m.getX().toFloat() * n.getY().toFloat()) + 
		(n.getX().toFloat() * l.getY().toFloat())) - ((l.getY().toFloat() * m.getX().toFloat()) + (m.getY().toFloat() * n.getX().toFloat()) +
			(n.getY().toFloat() * l.getX().toFloat())));
	return (abs(fi));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	fi, se, th;
	Fixed sum;
	fi = find_area(a, b, point);
	se = find_area(a, c, point);
	th = find_area(b, c, point);
	sum = fi + se + th;
	if (sum == find_area(a, b, c))
		return (true);
	else
		return (false);
}

/* Fixed s(Point p1, Point p2, Point p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())) -
		   ((p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const pt)
{
	Fixed s1 = s(pt, a, b);
	Fixed s2 = s(pt, b, c);
	Fixed s3 = s(pt, c, a);
	return (s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0);
} */