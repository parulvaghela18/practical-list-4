#include<iostream>
using namespace std;

class employee
{
	private:
		string emp_name;
		int emp_id;
	
	public:
	  void	getdata()
	  {
	  	cout<<"Enter the Id :: ";
    		cin>>emp_id;
    		cin.ignore();
    	cout<<"Enter the Name :: ";
    		getline(cin,emp_name);
	  }
	  void putdata();

};

void employee ::putdata()
{
    cout << "Employee details:\n";
    cout << "ID::"<<emp_id<<endl;
    cout <<"Name::"<<emp_name;
}
int main()
{
    employee e1;
    
    e1.getdata();
    e1.putdata();

    return 0;
}
