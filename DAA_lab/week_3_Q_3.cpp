// Given an unsorted array of positive integers, design an algorithm and implement it using a program 
// to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity 
// = O(n log n))

#include<iostream>
using namespace std;
void merge(int* arr, int left, int mid, int right)
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
        if(a[ind1]<b[ind2])
            arr[indm++]=a[ind1++];
        else
            arr[indm++]=b[ind2++];
    }
    while(ind1<size1)
        arr[indm++]=a[ind1++];
    while(ind2<size2)
        arr[indm++]=b[ind2++];
}
void mergesort(int* arr, int left, int right)
{
    if(left>=right)
        return;
    
    int mid = left + (right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);

    merge(arr,left,mid,right);
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
        
        mergesort(arr,0,size-1);

        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        for(int i=0;i<size-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                cout<<"YES"<<endl;
                goto end;
            }
        }
        cout<<"NO"<<endl;
        end:{}
    }
}