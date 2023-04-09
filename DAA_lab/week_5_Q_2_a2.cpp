// Given an unsorted array of integers, design an algorithm and implement it using a program to find 
// whether two elements exist such that their sum is equal to the given key element.
// Approach - 2
// (Time Complexity = O(n))

#include <iostream>
using namespace std;


void twosum(int* arr, int size , int sum)
{
    //hashing
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
            max==arr[i];
    }

    int* hash = new int[max+1]{0};
    for(int i=0;i<size;i++)
    {
        ++hash[arr[i]];
    }

    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(sum-arr[i] >=0 && sum-arr[i] <= max)
        {
            if(hash[sum-arr[i]]>0)
            {
                hash[arr[i]]=0;
                cout<<arr[i]<<" "<<sum-arr[i]<<endl;
                flag=1;
            }
        }
    }
    if(flag==0)
        cout<<"No such element exist"<<endl;
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
        
        int sum;
        cin>>sum;
        twosum(arr,size,sum);
        delete arr;
    }
}