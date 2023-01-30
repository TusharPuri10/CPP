#include <iostream>
using namespace std;

int sum(int num)
{
    if(num == 1) return 1;
    else return num+sum(num-1);
}
int main()
{
    int num;
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}