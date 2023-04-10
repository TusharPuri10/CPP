#include<iostream>
#include<cmath>
using namespace std;
int jumpsearch(int* arr, int size,int target)
{
    int s=0;
    int step=sqrt(size);
    int e = step;
    while(arr[e]<target && e<size){
        s=e;
        e+=step;
    } 
    if(e>size-1)
        e=size;
    for(int i=s;i<e;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    cout<<jumpsearch(arr,7,12);
    return 0;
}