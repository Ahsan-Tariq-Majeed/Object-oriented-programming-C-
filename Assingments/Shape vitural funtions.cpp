#include <iostream>
using namespace std;

class shape
{
protected:


	double area;
public:
		double x,y,r;
	void GetData(int Xaxis, int Yaxis)
	{
		Xaxis = x;
		Yaxis = y;
		//Zaxis = r;

		//area = (Xaxis * Yaxis);
	}

};
class triangle : public shape
{

public:
	int AreaOfTriangle = 1 / 2 * x * y;

	void Display()
	{
		cout << "X axis is " << x <<endl;
		cout << "Y axis is " << y <<endl;
		cout << "Area of Triangle " << AreaOfTriangle <<endl;
	}
};
class rectangle : public shape
{

	
public:
	//int AreaOfRectangle;
	int AreaOfReactangle = x * y;

	void Display()
	{
		cout << "X axis is " << x <<endl;
		cout << "Y axis is " << y <<endl;
		cout << "Area of rectangle " << AreaOfReactangle <<endl;
	}
};

class circle : public shape
{


public:
	int AreaOfcircle = 3.14159 * x * x;

	void Display()
	{
		cout << "Radius R is " << x << endl;

		cout << "Area of Circle " << AreaOfcircle << endl;
	}
};


int main()
{
	int xyz,xaxis,yaxis; 

cout << "Enter the x axis\n";
		cin >> xaxis;
		cout << "Enter the y axis\n";
		cin >> yaxis;
shape s;
s.GetData(xaxis,yaxis);
	triangle t;
	rectangle r;
	circle c;

	
	

	//t.GetData(xaxis,yaxis,0);
	t.Display();

	//r.GetData(xaxis,yaxis,0);
	r.Display();

	cout << "Enter the radius\n";
	cin >> xyz;
	//c.GetData(xaxis,yaxis,xyz);
	c.Display();

	return 0;

}
