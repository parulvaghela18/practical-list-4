#include <iostream>
using namespace std;

class student
{
	public:
		int E_no,sem;
		student()
		{
			E_no=105;
			sem=3;
		}
};

int main()
{
	student s;
	cout<<"Enrollment is ::"<<s.E_no<<endl;
	cout<<"Enrollment is ::"<<s.sem<<"rd sem"<<endl;
	return 0;
}

