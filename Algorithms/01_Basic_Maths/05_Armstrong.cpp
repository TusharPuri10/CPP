#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int temp=num;
    int sum=0;
    int temp2=num,digit=0;
    while(temp2)
    {
        temp2/=10;
        ++digit;
    }
    while(temp)
    {
        int k = temp%10;
        sum = sum + pow(k,digit);
        temp/=10;
    }
    if(num == sum)
        cout<<"armstrong"<<endl;
    else
        cout<<"Not armstrong"<<endl;
    return 0;
}