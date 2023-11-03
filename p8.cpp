#include<iostream>
using namespace std;

 class x
{
		
		private:
			int std_id;
			string name;
			
		public:
		void getdata()
		{
			cout<<"Enter Student ID   ::";
			cin>>std_id;
			cin.ignore();
			cout<<"Enter Student Name ::";
			getline(cin,name);
		}
	friend class y;	
};

class y
{			
		public :
	    void putdata(x& x1)
		{
			cout<<"Student Id is   ::"<<x1.std_id<<endl;
			cout<<"Student Name is ::"<<x1.name<<endl;
		}
};


int main()
{
	x x1;
	x1.getdata();
	
	
	y y1;
	y1.putdata(x1);
	return 0;
}

