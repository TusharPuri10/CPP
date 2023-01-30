#include<iostream>
using namespace std;

class employee{
	private:
		int a,b,c; //private members, can be accessed only by methods(function) of this class only.
	public://public members, can be accessed by any function, we just have to create object and use dot(.) operator
		int d,e;
		void setdata(int a,int b,int c);//only declaration
		void printdata()
		{
			cout<<"value of a is "<<a<<endl;
			cout<<"value of b is "<<b<<endl;
			cout<<"value of c is "<<c<<endl;
			cout<<"value of d is "<<d<<endl;
			cout<<"value of e is "<<e<<endl;
		}
};
void employee::setdata(int a,int b, int c)//definition of function
{
	this->a = a;
	this->b = b;
	this->c = c;
	d = a+b;
}
int main()
{
	employee emp;//declaring object of class
	emp.setdata(1,2,3);
	//emp.a = 13;// We cannot do this because a is private
	emp.e = 12;
	emp.printdata();
	return 0;
}
