#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int* a = new int(size);
    for(int i=0;i<size;i++)
        cin>>a[i];
    
    //linear search
    int num;
    cin>>num;
    int no_of_searches = 0;
    for(int i=0;i<size;i++)
    {
        ++no_of_searches;
        if(a[i]==num)
        {
            cout<<"found at index "<<i<<endl;
            goto end;
        }
    }
    cout<<"not found"<<endl;
    end:
    cout<<"total number of searches: "<<no_of_searches;
    return 0;
}