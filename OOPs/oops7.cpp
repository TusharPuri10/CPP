#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		complex(void);//constructor declaration //void constructor
		void printnumber(void)
		{
			cout<<a<<" + i"<<b<<endl;
		}
};
complex::complex()//constructor definitionn // This a default constructor,
{                                           // takes no parameter.
	a = 2;
	b = 3;
}
int main()
{
	complex c1,c2;
	c1.printnumber();// 2 + i3
	c2.printnumber();// 2 + i3
	return 0;
}
