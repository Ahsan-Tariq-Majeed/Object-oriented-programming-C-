#include <iostream>
using namespace std;

class shape
{
	
public:
	double x_axis;
	double y_axis;
	double area;

	void GetData(double x, double y)
	{
		x_axis = x;
		y_axis = y;

		area = x_axis * y_axis;
	}

	virtual void Display(){}
};

class triangle : public shape
{

public:
	

	void Display()
	{
		float TriangleArea;
		TriangleArea = (0.5) * x_axis * y_axis;
		cout << "Area of Triangle is\n" << TriangleArea << endl;
	}
};

class rectangle : public shape
{
public:

	void Display()
	{
		double RectangleArea;
		RectangleArea = x_axis * y_axis;
		cout << "Area of Rectangle is\n" << RectangleArea <<endl;
	}
};

class circle : public shape
{
public:

	void Display()
	{
		double CircleArea = 3.14 * x_axis * x_axis;
		cout << "Area of Circle is\n" << CircleArea << endl;
	}
};

int main()
{
	int a, b;
	shape* tri;
	shape* rec; 
	shape *cir;

	triangle t;
	rectangle r;
	circle c;

	tri = &t;
	rec = &r;
	cir = &c;
	
	cout << "Enter the valur of x & y axis\n";
	cin >> a >> b;

	tri->GetData(a,b);
	tri->Display();

	cout << "Enter the valur of x & y axis\n";
	cin >> a >> b;

	rec->GetData(a,b);
	rec->Display();

	cout << "Enter the radius\n";
	cin >> a;

	cir->GetData(a,0);
	cir->Display();
}


