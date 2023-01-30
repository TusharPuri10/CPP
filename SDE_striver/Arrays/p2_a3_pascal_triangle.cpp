//getting term at (r,c) position of pascal triangle //assuming we are starting from row-1
// term(r,c) is r-1 C c-1
// x C y = x!/y!*(x-y)!
#include <iostream>
using namespace std;

int fibb(int n) // O(n)
{
    if(n==0 || n==1)
        return n;
    else
        return n*fibb(n-1);
}
int main()
{
    int r,c;
    cin>>r>>c;
    cout<<(fibb(r-1)/(fibb(c-1)*fibb(r-c)));
    return 0;
}