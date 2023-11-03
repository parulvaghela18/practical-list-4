#include <iostream>
using namespace std;

class Example 
{
	public:
		int a;

	void add(Example E)
	{
		a = a + E.a;
	}
};

int main()
{

	Example E1, E2;

	E1.a = 50;
	E2.a = 100;

	cout << "Initial Values "<<endl;
	cout << "Value of object 1: " << E1.a<<endl;
	cout << "object 2: " << E2.a<<endl;

	E2.add(E1);
	cout << "New values "<<endl;
	cout << "Value of object 1: " << E1.a<<endl;
	cout << "object 2: " << E2.a<<endl;

	return 0;
}

