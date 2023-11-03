#include<iostream>
using namespace std;

class student 
{
	private:
		int std_id;
		string name;
		
	public:
		void putdata()
		{
			cout<<"Student Id is   ::"<<std_id<<endl;
			cout<<"Student Name is ::"<<name<<endl;
		}
		friend void getdata (student &s);
};

void getdata (student &s)
{
	cout<<"Enter Student Id   ::"<<endl;
	cin>>s.std_id;
	cin.ignore();
	cout<<"Enter Student Name ::"<<endl;
	getline(cin,s.name);
}
int main()
{
	student s1;
	getdata(s1);
	s1.putdata();
	return 0;
}
