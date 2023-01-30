#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int newnum=0;
    int temp = num;
    while(num)
    {
        newnum*=10;
        newnum += (num%10);
        num /= 10;
    }
    if(newnum == temp)
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}