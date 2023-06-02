//  You have been given two sorted integer arrays of size m and n. Design an algorithm and implement
// it using a program to find list of elements which are common to both. (Time Complexity = 
// O(m+n))

//sorted
#include<iostream>
using namespace std;
void common(int* arr1, int size1, int* arr2, int size2)
{
    //two pointer
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            ++i;
            ++j;
        }
        else if(arr1[i]<arr2[j])
            ++i;
        else
            ++j;
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size1;
        cin>>size1;
        int* arr1 = new int[size1];
        for(int i=0;i<size1;i++)
            cin>>arr1[i];
        
        int size2;
        cin>>size2;
        int* arr2 = new int[size2];
        for(int i=0;i<size2;i++)
            cin>>arr2[i];
        
        common(arr1,size1,arr2,size2);
        delete arr1;
        delete arr2;
    }
}