#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class animal {
public:
	virtual void eat() = 0;
};

class dog:public animal
{
public:
	void eat()
	{
		cout << "dog is eating"<<endl;
	}
};

class cat :public animal{
public:
	void eat()
	{
		cout << "cat is eating"<<endl;
	}
};

int main()
{
	animal* an = NULL;
	int input;

	while (1)
	{
		system("cls");
		cout << "press 1 to cheak status of dog" << endl;
		cout << "press 2 to cheak status of cat" << endl;
		cout << "press 3 to Exit" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			an = new dog;
			break;

		case 2:
			an = new cat;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "enter an valid input!!";
		}
		an->eat();
		_getch();
	}
	return 0;
}