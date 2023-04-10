// Given an unsorted array of integers, design an algorithm and implement a program to sort this
// array using selection sort. Your program should also find number of comparisons and number of
// swaps required.

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