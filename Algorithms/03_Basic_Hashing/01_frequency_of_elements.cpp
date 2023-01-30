#include <iostream>
#include <climits>
using namespace std;

void getfrequency(int a[],int size)
{
    int max = INT_MIN;
    for(int i = 0; i < size; i++)
        if(a[i] > max) max = a[i];
    int* hash = new int[max+1]{};
    for(int i = 0;i < size; i++)
        ++hash[a[i]];
    for(int i = 0; i <=max;i++)
        if(hash[i]!=0)
            cout<<"Frequency of element: "<<i<<" is "<<hash[i]<<endl;
}
int main()
{
    int a[13]={2,2,4,4,6,1,3,2,4,3,34,4,1};
    getfrequency(a,13);
    return 0;
}