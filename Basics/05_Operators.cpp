#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 12;
    //Arithematic operator [+,-,*,/]
    cout << a+b << endl;

    //Remainder operator [%]
    cout << a%b << endl;

    //Arithematic assignment operator [+=,-=]
    int c = 10;
    c+=a; // c=c+a
    cout << c << endl;

    //Increment operator and decrement operator [++,--]
    cout << a++ << endl;
    cout << ++a << endl;

    //both expressions are using decrement operator
    cout << --a << endl;// prefix decrement operator
    cout << a-- << endl;// postfix increment operator
    return 0;
}