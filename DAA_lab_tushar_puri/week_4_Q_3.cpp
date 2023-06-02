// Given an unsorted array of integers, design an algorithm and implement it using a program to
// find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))

#include<iostream>
using namespace std;
int kthsmallest(int* arr, int size, int k)
{
    //count sort
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    int* hash = new int[max+1]{0};

    for(int i=0;i<size;i++)
        ++hash[arr[i]];
    
    int temp=0;
    for(int i=0;i<=max;i++)
    {
        if(hash[i]>0)
        {
            ++temp;
        }
        if(temp==k)
            return i;
    }
    return max;
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
        
        int k;
        cin>>k;
        cout<<kthsmallest(arr,size,k)<<endl;
        delete arr;
    }
}
