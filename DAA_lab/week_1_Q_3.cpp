// Given an already sorted array of positive integers, design an algorithm and implement it using a
// program to find whether a given key element is present in the sorted array or not. For an array
// arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2^k] and so on. 
// Once the interval (arr[2^k] < key < arr[ 2^(k+1)] ) is found, perform a linear search operation from the index 2k
// to find the element
// key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):
// Jump Search

#include<iostream>
using namespace std;
void jumpSearch(int *arr, int size, int key)
{
    int k=0;
    while(k<size)
    {
        if(arr[k]>key)
        {
            break;
        }
        if(k==0)
            ++k;
        k*=2;
    }

    int flag=0;
    int start = k/2;
    int end;
    if(k>=size)
        end = size-1;
    else
        end = k;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Found at position "<<i<<endl;
            flag=1;
        }
    }

    if(flag==0)
        cout<<"Not found"<<endl;
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
        jumpSearch(arr,size,key);
        delete arr;
    }
}

