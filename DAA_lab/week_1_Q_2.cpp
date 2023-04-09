// Given an already sorted array of positive integers, design an algorithm and implement it using a
// program to find whether given key element is present in the array or not. Also, find total number
// of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input)


#include<iostream>
using namespace std;
void binarySearch(int* arr, int size, int key)
{
    //iterative
    int start=0,end=size-1;
    int mid = start + (end-start)/2;
    int no_of_comparison = 0;
    int flag=0;
    while(start<=end)
    {
        ++no_of_comparison;
        if(arr[mid]==key)
        {
            flag=1;
            break;
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
    if(flag==0)
    {
        cout<<"Not Present "<<no_of_comparison<<endl;
    }
    else
    {
        cout<<"Present "<<no_of_comparison<<endl;

    }
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