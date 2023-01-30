#include <iostream>
#include<climits>
using namespace std;

int main()
{
    cout << "SIze of different primary data types in C++" << endl;

    cout <<"Char:"<<sizeof(char) << endl;
    cout <<"Short:"<<sizeof(short) << endl;
    cout <<"Int:"<<sizeof(int) << endl;
    cout <<"Long:"<<sizeof(long) << endl;
    cout <<"Float:"<<sizeof(float) << endl;
    cout <<"Double:"<<sizeof(double) << endl;
    cout <<"Bool:"<<sizeof(bool) << endl;
    cout <<"Wide Character:"<<sizeof(wchar_t) << endl;

    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "LONG_MAX: " << LONG_MAX << endl;
    cout << "LONG_MIN: " << LONG_MIN << endl;
    return 0;
}