#include<iostream>
using namespace std;

class complex
{
	float real,imag;
	public:
		complex(float _real,float _imag)
		{ 
			real=_real;
			imag=_imag;
		}
		void disp()
		{
			cout<<"The value of real="<<real<<endl;
			cout<<"The value of imag="<<imag<<endl;
		}
		friend complex operator + (complex c,complex d)
		{
			d.real=d.real+c.real;
			d.imag=d.imag+c.imag;
			return d;
		}
};
int main()
{
	complex x(4,4);
	complex y(6,6);
	complex z=x+y;
	z.disp();
}
