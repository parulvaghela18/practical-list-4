#include<iostream>
using namespace std;
class Myclass
{
	public:
			Myclass()
			{
				cout<<"object created"<<endl;
			}
			~Myclass()
			{
				cout<<"object destroyed"<<endl;
			}
 };
 int main()
 {
 		Myclass s1;
 		Myclass s2;
 		return 0;
 }

