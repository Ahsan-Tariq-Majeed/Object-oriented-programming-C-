#include <iostream>
using namespace std;

class vehical
{
protected:
	int Model;
	string colour;
public:
	void Lvehical()
	{
		cout << "Enter the Model\n";
		cin >> Model;
		cout << "Enter the colour\n";
		cin >> colour;

		void hello()
		{
			cout << "This is base class\n";
		}

	}
};

class car : public vehical
{
protected:
	string type;
public:
	void Lcar();
	cout << "Enter the type of the vehicale\n";

	void hello()
	{
		cout << "This is car class\n";
	}
};

int main()
{
	int x;
	cout << "Enter number of data\n";
	cin >> x;
	car* abc = new car[x];
	car* q = abc;

	for (int q = 0; q < x; q++)
	{
		abc->Lvehical();
		abc++;
	}
	for (int r = 0; r < x; r++)
	{
		q->hello();
		q++;
	}
}