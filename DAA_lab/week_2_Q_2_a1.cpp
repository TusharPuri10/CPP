// Given a sorted array of positive integers, design an algorithm and implement it using a program to 
// find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include<iostream>
using namespace std;
int binarySearch(int* arr,int key, int start, int end)
{
    if(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            return binarySearch(arr,key,mid+1,end);
        else
            return binarySearch(arr,key,start,mid-1);
    }
        
    return -1;

}
void fun(int* arr , int size)
{
    if(size<3)
    {
        cout<<"No Sequence Found"<<endl;
        return;
    }


    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            int key = arr[i]+arr[j];
            int k = binarySearch(arr,key,j+1,size-1);
            if(k!=-1)
            {
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                return;
            }
        }
    }

    cout<<"No sequence found"<<endl;
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int size;
        cin>>size;
        int* arr = new int[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];

        fun(arr,size);
    }
}