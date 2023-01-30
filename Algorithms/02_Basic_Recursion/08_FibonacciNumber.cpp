#include <iostream>
using namespace std;

int fibb(int num)
{
    if(num <=1)
        return num;
    else
        return fibb(num-1)+fibb(num-2);
}
int main()
{
    int num;
    cin >> num;
    cout<<fibb(num);
    return 0;
}