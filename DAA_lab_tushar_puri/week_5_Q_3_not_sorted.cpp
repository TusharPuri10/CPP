//  You have been given two sorted integer arrays of size m and n. Design an algorithm and implement
// it using a program to find list of elements which are common to both. (Time Complexity = 
// O(m+n))

//not sorted
#include<iostream>
using namespace std;
void common(int* arr1, int size1, int* arr2, int size2)
{
    //hashing for arr1
    int max=arr1[0];
    for(int i=1;i<size1;i++)
        if(arr1[i]>max)
            max=arr1[i];
    
    int* hash = new int[max+1]{0};
    for(int i=0;i<size1;i++)
        ++hash[arr1[i]];
    
    for(int i=0;i<size2;i++)
    {
        if(arr2[i]<=max && hash[arr2[i]]>0)
        {
            --hash[arr2[i]];
            cout<<arr2[i]<<" ";
        }
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