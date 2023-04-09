// I. Given an array of nonnegative integers, design a linear algorithm and implement it using a program 
// to find whether given key element is present in the array or not. Also, find total number of
// comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

#include<iostream>
using namespace std;
void linearSearch(int* arr, int size, int key)
{
    int flag=0;
    int comparisons=0;
    for(int i=0;i<size;i++)
    {
        ++comparisons;
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Not Present "<<comparisons<<endl;
    else
        cout<<"Present "<<comparisons<<endl;

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
        linearSearch(arr,size,key);
    }
    return 0;
}
