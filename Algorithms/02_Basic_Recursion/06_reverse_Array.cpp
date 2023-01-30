#include <iostream>
#include<valarray>
using namespace std;

void reverse(int a[],const int size, int i)
{
    if((size%2==0 && i>size/2-1)||(size%2==1 && i>size/2))
        return;
    swap(a[i],a[size-1-i]);
    reverse(a,size,i+1);
}
int main()
{
    int a[5] = {1,2,3,4,5};
    reverse(a,5,0);
    for(int i = 0; i < 5; i++)
        cout<<a[i]<<" ";
    return 0;
}