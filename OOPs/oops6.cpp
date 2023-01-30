#include<iostream>
using namespace std;

//forward declaration of complex class
class complex;

class calculator{
	public:
		//forward declaration of this function
		int sumReal(complex o1,complex o2);
		int sumImg(complex o1,complex o2);
};
class complex{
	int a,b;
	public:
		void setnumber(int x,int y)
		{
			a = x;
			b = y;
		}
		void printnumber(void)
		{
			cout<<a<<"+i"<<b<<endl;
		}
		//friend int calculator::sumReal(complex,complex);
		//friend int calculator::sumImg(complex,complex);
		/*if we have to add many more friend fuctions then it is not efficient
		to declare the friend function every time we can also make friend class
		if the program needs it*/
		friend class calculator;
};
int calculator::sumReal(complex o1,complex o2)
{
	return (o1.a +o2.a);
}
int calculator::sumImg(complex o1,complex o2)
{
	return (o1.b +o2.b);
}

int main()
{
	complex c1,c2;
	c1.setnumber(1,3);
	c1.printnumber();
	
	c2.setnumber(2,4);
	c2.printnumber();
	
	calculator cal;
	cout<<"The sum of real part of complex numbers are "<<cal.sumReal(c1,c2)<<endl;
	cout<<"The sum of imaginary part of complex numbers are "<<cal.sumImg(c1,c2)<<endl;
	
	return 0;
}
