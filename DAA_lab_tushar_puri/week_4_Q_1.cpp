// Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
// an array of elements by dividing the array into two subarrays and combining these subarrays after 
// sorting each one of them. Your program should also find number of comparisons and inversions
// during sorting the array.

#include<iostream>
using namespace std;
void merge(int* arr, int left, int mid, int right,int& comparison, int& inversion)
{
    int size1 = mid-left+1;
    int size2 = right - mid;

    int *a = new int[size1];
    int *b = new int[size2];

    for(int i=0;i<size1;i++)
    {
        a[i]=arr[left+i];
    }

    for(int i=0;i<size2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int ind1=0,ind2=0,indm=left;
    while(ind1<size1 && ind2<size2)
    {
        ++comparison;
        if(a[ind1]<b[ind2])
            arr[indm++]=a[ind1++];
        else
        {
            inversion += size1 - ind1;
            arr[indm++]=b[ind2++];
        }
    }
    while(ind1<size1)
        arr[indm++]=a[ind1++];
    while(ind2<size2)
        arr[indm++]=b[ind2++];
}
void mergesort(int* arr, int left, int right,int& comparison, int& inversion)
{
    if(left>=right)
        return;
    
    int mid = left + (right-left)/2;
    mergesort(arr,left,mid,comparison,inversion);
    mergesort(arr,mid+1,right,comparison,inversion);

    merge(arr,left,mid,right,comparison,inversion);
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
        int inversion=0;
        mergesort(arr,0,size-1,comparison,inversion);

        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;

        cout<<"comparison-"<<comparison<<endl;
        cout<<"inversion-"<<inversion<<endl;

        delete arr;
    }
}