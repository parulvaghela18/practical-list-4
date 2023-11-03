#include <iostream>
using namespace std;

class student
{
	public:
		int roll_no;
		string name;
		student(int r,string n)
		{
			roll_no=r;
			name=n;
		}	
		void display()
		{
			cout<<"Your Roll No is ::"<<roll_no<<endl;
			cout<<"Your Name is    ::"<<name<<endl;
		}			
		
};

int main()
{
	student s(96,"het");
	s.display();
	return 0;
}
