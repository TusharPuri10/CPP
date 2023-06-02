// Given a sorted array of positive integers, design an algorithm and implement it using a program to 
// find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include<iostream>
using namespace std;
void fun(int *arr , int size)
{
    // for each k O(n)
    // we will find i and j by two pointer approach O(n^2)

    if(size<2)
    {
        cout<<"No sequence found"<<endl;
        return;
    }
    for(int k=size-1;k>=2;k--)
    {
        int i=0;
        int j=k-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==arr[k])
            {
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                return;
            }
            else if(arr[i]+arr[j]<arr[k])
                ++i;
            else
                --j;
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
        delete arr;
    }
}