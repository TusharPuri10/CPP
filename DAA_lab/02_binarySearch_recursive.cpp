#include<iostream>
using namespace std;
int binarySearch(int a[], int start, int end, int key,int* x)
{
    ++(*x);
    if(start>end)
        return -1;

    int mid = start + (end-start)/2;
    if(a[mid]==key)
        return mid;
    else if(key<a[mid])
        return binarySearch(a,start,mid-1,key,x);
    else
        return binarySearch(a,mid+1,end,key,x);
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
    cout<<"found at index: "<<binarySearch(a,0,size-1,num,&no_of_searches)<<endl;
    cout<<"total number of searches: "<<no_of_searches<<endl;
    return 0;
}