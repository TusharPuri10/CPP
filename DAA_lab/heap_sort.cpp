#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int* arr, int size, int i)
{
    int left = 2*i + 1;
    int right = 2*i + 2;
    int largest = i;

    if(left<size && arr[left]>arr[largest])
        largest=left;

    if(right<size && arr[right]>arr[largest])
        largest=right;
    
    //if largest is not root
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);

        // Recursively heapify the affected sub-tree
        heapify(arr,size,largest);
    }
}
void heapsort(int* arr, int size)
{
    for(int i = size/2-1 ;i>=0;i--)
        heapify(arr,size,i);
    
    for(int i=size-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[7]={64, 34, 25, 12, 22, 11, 90};
    heapsort(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}