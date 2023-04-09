// Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
// implement it using a program to find which alphabet has maximum number of occurrences and
// print it. (Time Complexity = O(n)) (Hint: Use counting sort )

#include<iostream>
using namespace std;
void maxoccurence(char* arr, int size)
{
    int* hash = new int[26]{0};


    for(int i=0;i<size;i++)
    {
        ++hash[arr[i]-'a'];
    }

    int max=0;
    for(int i=0;i<26;i++)
    {
        if(hash[i]>1)
        {
            if(hash[max]<hash[i])
                max=i;
        }
    }
    if(max==0 && hash[max]<2)
        cout<<"No Duplicates Present"<<endl;
    else
        cout<<char('a' + max)<<"-"<<hash[max]<<endl;

}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int size;
        cin>>size;
        char* arr = new char[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        
        maxoccurence(arr,size);
        delete arr;
    }
}