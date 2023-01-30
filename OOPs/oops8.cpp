#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		complex(int,int);//constructor declaration //parameterized constructor
		void printnumber(void)
		{
			cout<<a<<" + i"<<b<<endl;
		}
};
complex::complex(int x, int y)//constructor definitionn // This a parameterized constructor,
{                                           // takes one or more than one parameter.
	a = x;
	b = y;
}
int main()
{
	complex c1(1,5);//implicit call //use this one
	
	complex c2 = complex(2,3);//explicit call
	
	c1.printnumber();// 1 + i5
	c2.printnumber();// 2 + i3
	return 0;
}
