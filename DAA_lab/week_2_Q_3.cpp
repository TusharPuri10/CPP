// Given an array of nonnegative integers, design an algorithm and a program to count the number
// of pairs of integers such that their difference is equal to a given key, K.

#include <iostream>
using namespace std;
int getpairs(int* arr, int size,int k)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
        if(arr[i]>max)
            max=arr[i];
    
    int* hash = new int[max+1]{0};

    for(int i=0;i<size;i++)
    {
        ++hash[arr[i]];
    }
    

    //now checking
    int pairs=0;
    for(int i=0;i<size;i++)
    {
        int flag=0;
        if(0<=arr[i]-k)
        {
            if(hash[arr[i]]>0 && hash[arr[i]-k]>0)
            {
                flag=1;
                ++pairs;
            }
        }
        if( arr[i]+k<size)
        {

            if(hash[arr[i]>0 && hash[arr[i]+k]>0])
            {
                flag=1;
                ++pairs;
            }
        }
        if(flag==1)
            hash[arr[i]]==0;
    }
    return pairs;

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
        
        int key;
        cin>>key;
        cout<<getpairs(arr,size,key)<<endl;
    }
}