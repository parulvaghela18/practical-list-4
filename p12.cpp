#include <iostream>
using namespace std;

class person
{
	public:
			int age;
			string name;
			person(int a,string b)
			{
				name=b;
				age=a;
			}
			person(person &ab)
			{
				name=ab.name;
				age=ab.age;
				cout<<"Copy Constructor Called:)"<<endl;
			}
			
			void display()
			{
				cout<<"Name ::"<<name<<endl;
				cout<<"Age  ::"<<age<<endl;
			}
					
};

int main()
{
	person person1(18,"het");
	person person2(person1);
	
	cout<<"Person 1 Information ::"<<endl;
	person1.display();
	cout<<"Person 2 Information ::"<<endl;
	person2.display();
	
	return 0;
}
