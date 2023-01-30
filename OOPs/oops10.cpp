#include<iostream>
using namespace std;
class fun{
	private:
		int a,b;
		char c;
	public:
		fun(int x)
		{
			a = x;
			b = 0;
			c = 'a';
		}
		fun(int x,int y)
		{
			a = x;
			b = y;
			c = 'a';
		}
		fun()
		{
			a = 1;
			b = 0;
			c = 'a';
		}
		fun(char z, int y)
		{
			a = 1;
			b = y;
			c = z;
		}
		void print()
		{
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
};
int main()
{
	fun c1;
	c1.print();// 1 0 a
	
	fun c2(3);
	c2.print();// 3 0 a
	
	fun c3(4,5);
	c3.print();// 4 5 a
	
	fun c4('Q',4);
	c4.print();// 1 4 Q
	
	return 0;
}
