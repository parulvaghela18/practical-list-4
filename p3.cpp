#include<iostream>
using namespace std;

class Student
{
	public:
		string name;
		float spi;
};

int main()
{
	Student student[10];
	int highestspi=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter the name of student ::"<<i+1<<"::";
		cin>>student[i].name;
		cout<<"Enter SPI for "<<student[i].name<<"::";
		cin>>student[i].spi;
		
		if(student[i].spi>student[highestspi].spi)
		{
			highestspi=i;
		}
	}
	cout<<"Student With the Highest SPI is ::"<<student[highestspi].name<<"  with SPI::"<<student[highestspi].spi<<endl;
	return 0;
}
