// Given an unsorted array of integers, design an algorithm and implement it using a program to find 
// whether two elements exist such that their sum is equal to the given key element.
// Approach - 1
// (Time Complexity = O(n log n))

#include <iostream>
using namespace std;

void quicksort(int* arr, int left, int right);
int binarysearch(int* arr, int left, int right, int key);
void twosum(int* arr, int size , int sum)
{
    //sorting
    quicksort(arr,0,size-1);

    int flag=0;
    for(int i=0;i<size-1;i++)//O(n)
    {
        int key = sum-arr[i];
        int position = binarysearch(arr,i+1,size-1,key);//O(logn) 
        if(position!=-1)
        {
            cout<<arr[i]<<" "<<arr[position]<<endl;
            flag=1;
        }
    }
    if(flag==0)
        cout<<"No such element exist"<<endl;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int* arr, int left, int right)
{
    int i=left-1;
    int j=left;

    int random = left + rand()%(right-left+1);
    swap(arr[random],arr[right]);
    while(j<=right)
    {
        if(arr[j]<=arr[right])
        {
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    return i;
}
void quicksort(int* arr, int left, int right)
{
    if(left>=right)
        return;
    
    int pivot = partition(arr,left,right);
    quicksort(arr,left,pivot-1);
    quicksort(arr,pivot+1,right);
}

int binarysearch(int* arr,int left,int right,int key)
{
    if(left>=right)
        return -1;
    
    int mid = left + (right-left)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarysearch(arr,mid+1,right,key);
    else
        return binarysearch(arr,left,mid-1,key);
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