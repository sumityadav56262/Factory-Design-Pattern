#include<iostream>
using namespace std;
class Transport
{
public:
	virtual void delivery() = 0;
};
class Truck : public Transport
{
public:
	void delivery()
	{
		cout << "delivered by truck in a box."<<endl;
	}
};
class Ship : public Transport
{
public:
	void delivery()
	{
		cout << "delivery by ship in a container."<<endl;
	}
};
int main() {
	int no;

	Transport* Trans = NULL;

	cout << "Enter 1 for Truct or 2 for Ship : ";
	cin >> no;

	switch (no)
	{
	case 1:
		Trans = new Truck;
		break;

	case 2:
		Trans = new Ship;
		break;

	default:
		cout << "Please enter a valid input!!";
	}

	Trans->delivery();
	return 0;
}