#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float length, width, height, radius, pi, area_rectangle, area_triangle, area_circle, total_area;
	
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	
	cout << "Enter the height of the triangle: ";
	cin >> height;
	cout << endl;
	
	area_rectangle = length * width;
	cout << "The area of the rectangle is " << area_rectangle << endl;
	
	area_triangle = 0.5 * height * length;
	cout << "The area of the triangle is " << area_triangle << endl;
	
	pi = 3.142;
	radius = width / 2;
	area_circle = pi * pow(radius,2);
	cout << "The area of the circle is " << area_circle << endl << endl;
	
	total_area = area_rectangle + area_triangle + area_circle;
	cout << "So, the total area of the objects is " << total_area << endl;
	
	
	
	return 0;
	
	
	
	
}
