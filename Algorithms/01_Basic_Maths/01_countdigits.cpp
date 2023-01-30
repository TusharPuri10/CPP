#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int temp = num;
    int digits = 0;
    while(temp)
    {
        temp = temp / 10;
        ++digits;
    }
    cout<<num<< " has "<<digits<<" digits";
    return 0;
}