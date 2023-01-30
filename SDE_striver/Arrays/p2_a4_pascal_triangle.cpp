//getting complete row at row number 'r'
//if we do p2_a3 approach(fibbonaci) for every element in row then it will be O(n^2)
//we will do something else which will result in O(n)
// row 5 is -> 5-1C1-1   5-1C2-1.....
// row 5 is ->  4C0   4C1    4C2    4C3    4C4
//              1   4/1   4*3/2   4*3*2/3*2  4*3*2*1/4*3*2*1
#include <iostream>
using namespace std;

int main()
{
    int r;
    cin>>r;
    int p=r-1,q=1,a=r-1;
    cout<<1<<" ";
    for(int i=1;i<=r-1;i++)
    {
        cout<<a<<" ";
        --p;
        ++q;
        a*=p;
        a/=q;
    }
    return 0;
}