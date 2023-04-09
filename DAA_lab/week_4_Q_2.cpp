// Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
// an array of elements by partitioning the array into two subarrays based on a pivot element such
// that one of the sub array holds values smaller than the pivot element while another subarray 
// holds values greater than the pivot element. Pivot element should be selected randomly from the 
// array. Your program should also find number of comparisons and swaps required for sorting the
// array

//QUICK SORT

#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int* arr,int left,int right,int &comparison,int& swaps)
{
    int i=left-1;
    int j=left;

    int random = left + rand()%(right-left+1);
    swap(arr[random],arr[right]);
    while(j<=right)
    {
        ++comparison;
        if(arr[j]<=arr[right])
        {
            ++i;
            ++swaps;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    return i;
}
void quicksort(int* arr, int left, int right,int& comparison,int& swaps)
{
    if(left>=right)
        return;
    
    int pivot = partition(arr,left,right,comparison,swaps);

    quicksort(arr,left,pivot-1,comparison,swaps);
    quicksort(arr,pivot+1,right,comparison,swaps);
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
        
        int comparison=0;
        int swaps=0;

        quicksort(arr,0,size-1,comparison,swaps);

        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;

        cout<<"comparison-"<<comparison<<endl;
        cout<<"swaps-"<<swaps<<endl;

        delete arr;
    }
}