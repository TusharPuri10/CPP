#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setdata(void);
		void setdata_bysum(complex,complex);
		void printdata(void);
};
void complex::setdata(void)
{
	cin>>a;
	cin>>b;
}
void complex::setdata_bysum(complex c1,complex c2)
{
	a = c1.a + c2.a;	
	b = c1.b + c2.b;
}
void complex::printdata(void){
	cout<<a<<"+i"<<b<<endl;
}
int main()
{
	complex a1,a2,a3;
	a1.setdata();
	a1.printdata();
	a2.setdata();
	a2.printdata();
	a3.setdata_bysum(a1,a2);
	a3.printdata();
	return 0;
}
