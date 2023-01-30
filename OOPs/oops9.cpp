#include<iostream>
#include<cmath>
using namespace std;

class Point{
	int x,y;
	public:
		Point(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		friend void Distance(Point,Point);
};

void Distance(Point a,Point b)
{
	cout << "Distance between (" << a.x <<","<< a.y << ") and ("<< b.x <<","<< b.y <<") is : ";
	cout<<sqrt( pow((b.x - a.x),2) + pow((b.y - a.y),2) )<<endl;
}

int main()
{
	Point a(1,1);
	Point b(0,1);
	Point c(0,6);
	Point d(1,0);
	Point e(70,0);
	Distance(a,a);
	Distance(b,c);
	Distance(d,e);
	
	return 0;
}
/*
Distance between (1,1) and (1,1) is : 0
Distance between (0,1) and (0,6) is : 5
Distance between (1,0) and (70,0) is : 69
*/
