#include<iostream>
using namespace std;
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
		// Below line means that non member - sumComplex funtion
		// is allowed to do anything with my private parts (members)
		// can be declared in private too
		friend complex sumcomplex (complex,complex);
};
complex sumcomplex (complex o1,complex o2)
{
	complex o3;
	o3.a = o1.a + o2.a;
	o3.b = o1.b + o2.b;
	return o3;
}
int main()
{
	complex c1,c2,c3;
	c1.setnumber(1,2);
	c1.printnumber();// 1 + i2
	
	c2.setnumber(3,4);
	c2.printnumber();// 3 + i4
	
	c3 = sumcomplex(c1,c2);
	c3.printnumber();// 4 +i6
	
	return 0;
}
