#include<iostream>
using namespace std;
int binarySearch(int* a, int size, int target,int *x)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end)
    {
        ++(*x);
        if(a[mid]==target)
            return mid;
        else if(a[mid]<target)
            start = mid+1;
        else
            end = mid-1;
        mid = start + (end-start)/2;
    }
    return -1;
    
}
int main()
{
    int size;
    cin>>size;
    int* a = new int(size);

    for(int i=0;i<size;i++)
        cin>>a[i];
    
    //recursive binary seach
    int no_of_searches = 0;
    int num;
    cin>>num;
    cout<<"found at index: "<<binarySearch(a,size,num,&no_of_searches)<<endl;
    cout<<"total number of searches: "<<no_of_searches<<endl;
    return 0;
}