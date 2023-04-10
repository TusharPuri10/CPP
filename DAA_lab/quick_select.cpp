#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int* arr,int left,int right)
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
int kthsmallest(int* arr, int left, int right, int k)
{
    if(left>=right)
        return -1;
    
    int pivot = partition(arr,left,right);
    if(pivot+1==k)
        return arr[pivot];
    else if(pivot+1>k)
        kthsmallest(arr,left,pivot-1,k);
    else
        kthsmallest(arr,pivot+1,right,k);

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
        
        int k;
        cin>>k;
        cout<<kthsmallest(arr,0,size-1,k)<<endl;
        delete arr;

    }
}