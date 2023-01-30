#include <iostream>
using namespace std;

string isprime(int num)
{
    int count=0;
    for(int i=2; i<num; i++)
        if(num%i==0)
            ++count;
    if(count==0) return "Prime";
    else return "not prime";
}
int main()
{
    int num;
    cin>>num;
    cout<<isprime(num);
    return 0;
}