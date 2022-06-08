#include <iostream>
using namespace std;

class vehical
{
protected:
	int Model;
	string type;
	string colour;
public:


	void _vehical()
	{
		cout << "\n\nEnter the type\n";
		cin >> type;
		cout << "Enter the Model\n";
		cin >> Model;
		cout << "Enter the colour\n";
		cin >> colour;
	}
		
	void Display()
	{
		cout << "This is base class\n";
		cout << "Type is " << type << endl;
		cout << "Model is " << Model << endl;
		cout << "Colour is " << colour << endl;
	}

};

class car : public vehical
{
protected:
	string name;
public:
	void _car()
	{
		cout << "Enter the name of the " << type << endl;
		cin >> name;
	}
	void Display()
	{
		cout << "This is Drived class\n";
		cout << "Type is " << type << endl;
		cout << "Model is " << Model << endl;
		cout << "Colour is " << colour << endl;
		cout << "Name of the " << type << " is " << name << endl;
	}
	void ahsan()
	{
		cout << "Ahsan\n";
	}
};

int main()
{
	car* point;
	car abc;
	point = &abc;

	point->Display();
}