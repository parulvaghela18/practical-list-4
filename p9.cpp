#include<iostream>
using namespace std ;

class simple
{
	private :
		int a,b;
		
	public:
		void getdata()
		{
			cout<<"Enter The number for Addition ::";
			cin>>a>>b;
		}
		friend void addition(simple s);	
 }; 
 void addition(simple s)
 {
 	cout<<"Addition is :: "<<s.a+s.b<<endl;
 }
 int main()
 {
 	simple s1;
 	s1.getdata();
 	addition(s1);
 	return 0;
 }
