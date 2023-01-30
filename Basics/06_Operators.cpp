#include <iostream>
using namespace std;
int a=5;
int main()
{
    cout << ++a << endl;//6
    cout << a << endl;//6
    cout << --a << endl;//5
    cout << a++ << endl;//5
    cout << a << endl;//6
    cout << a-- << endl;//6

    int a =2, b=3;
    if(a>1 && b<2) 
        cout << "hello world1" << endl;
    if(a>1 || b<2)
        cout << "hello world2" << endl;
    if(a!=2)
        cout << "hello world3" << endl;
    cout << endl;

    if(a>1 & b<2) 
        cout << "hello world1" << endl;
    if(a>1 | b<2)
        cout << "hello world2" << endl;
    cout << endl;

    cout << (a>1 & b<2) << endl;
    cout << (a>1 | b<1) << endl;
    return 0;
}