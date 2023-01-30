#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int newnum=0;
    while(num)
    {
        newnum*=10;
        newnum += (num%10);
        num /= 10;
    }
    cout << newnum << endl;
    return 0;
}