#include<iostream>
using namespace std;
class simple{
	int data1,data2,data3;
	public:
		simple(int a,int b = 9,int c = 11)
		{
			data1 = a;
			data2 = b;
			data3 = c;
		}
		void print(void);
};
void simple::print(void)
{
	cout<<data1<<" "<<data2<<" "<<data3<<endl;
}
int main()
{
	simple s1(15);
	s1.print();// 15 9 11
	
	simple s2(15,16);
	s2.print();// 15 16 11
	
	simple s3(15,16,17);
	s3.print();// 15 16 17
	
	return 0;
	
}
