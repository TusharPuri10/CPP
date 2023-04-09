// Given an unsorted array of integers, design an algorithm and a program to sort the array using
// insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
// total number of times the array elements are shifted from their place) required for sorting the array

#include<iostream>
using namespace std;

void insertionsort(int* arr, int size)
{
    int comparisons=0;
    int shifts=0;
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            ++comparisons;
            ++shifts;
            arr[j+1]=arr[j];
            --j;
        }
        ++shifts;
        arr[j+1]=key;
    }

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"comparisons - "<<comparisons<<endl<<"shits - "<<shifts<<endl;
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
        
        insertionsort(arr,size);
    }
}