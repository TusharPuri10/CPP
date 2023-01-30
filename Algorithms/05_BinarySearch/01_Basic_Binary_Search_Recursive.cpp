#include <iostream>
using namespace std;

int binarySearch(int a[],int start, int end, int key)
{
    if(start>end)
        return -1;
    int mid = start + (end-start)/2;

    if(key==a[mid])
        return mid;
    else if(a[mid]<key)
        return binarySearch(a,mid+1,end,key);
    else
        return binarySearch(a,start,mid-1,key);
}
int main()
{
    int even[6]={1,3,5,6,7,9};
    int odd[5]={2,4,6,8,10};

    int evenindex = binarySearch(even,0,5,3);
    int oddindex = binarySearch(odd,0,4,6);
    cout<<evenindex<<endl;
    cout<<oddindex<<endl;
    return 0;
}