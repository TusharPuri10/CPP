// Given an unsorted array of integers, design an algorithm and a program to sort the array using
// insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
// total number of times the array elements are shifted from their place) required for sorting the array

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionsort(int* arr, int size)
{
    int comparisons=0;
    int shifts=0;

    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            ++comparisons;
            if(arr[min]>arr[j])
                min=j;
        }
   
        ++shifts;
        swap(arr[min],arr[i]);
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
        
        selectionsort(arr,size);
        delete arr;
    }
}