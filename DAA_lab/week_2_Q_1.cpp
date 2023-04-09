// Given a sorted array of positive integers containing few duplicate elements, design an algorithm
// and implement it using a program to find whether the given key element is present in the array or
// not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

#include<iostream>
using namespace std;
void binarySearch(int *arr, int size, int key)
{
    //finding left most element
    int start=0,end=size-1;
    int mid = start + (end-start)/2;
    int lefti=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            lefti=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }

    if(lefti==-1)
    {
        cout<<"Not found"<<endl;
        return;
    }

    //finding right most element
    start = 0;
    end = size-1;
    mid = start + (end-start)/2;
    int righti=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            righti=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }

    cout<<"Found"<<endl;
    cout<<"Number of copies = "<<righti-lefti+1<<endl;
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
        
        int key;
        cin>>key;
        binarySearch(arr,size,key);
    }
}