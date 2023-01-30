#include <iostream>
#include <utility>
using namespace std;


int first_occurrence(int arr[], int size, int key)
{
     int start=0, end=size-1;
    int mid = start + (end-start) / 2;

    int left = -1;
    while(start<=end)
    {
        if(arr[mid]==key)//search on left
        {
            left = mid;
            end = mid - 1;
        }
        else if(arr[mid]<key)//search on right
            start = mid + 1;
        else if(key<arr[mid])//search on left
            end = mid - 1;
        mid = start + (end-start) / 2;
    }
    return left;
}

int last_occurrence(int arr[], int size, int key)
{
     int start=0, end=size-1;
    int mid = start + (end-start) / 2;

    int right = -1;
    while(start<=end)
    {
        if(arr[mid]==key)//search on right
        {
            right = mid;
            start = mid + 1;
        }
        else if(arr[mid]<key)//search on right
            start = mid + 1;
        else if(key<arr[mid])//seach on left
            end = mid - 1;
        mid = start + (end-start) / 2;
    }
    return right;
}

pair<int, int> occurrence(int arr[], int size, int key)
{
   pair<int,int> p;
   p.first = first_occurrence(arr, size, key);
   p.second = last_occurrence(arr, size, key);
   return p;
}
int main()
{
    int a[11]={0,1,1,2,2,2,3,4,5,5,6};
    int b[12]={0,2,2,6,6,6,6,7,8,9,10,10};
    pair<int,int> occ;

    occ = occurrence(a,11,2);
    cout<<occ.first<<" "<<occ.second<<endl;
    //total number of occurence = occ.second - occ.first + 1; //if it is not -1 

    occ = occurrence(b,12,6);
    cout<<occ.first<<" "<<occ.second<<endl;

    occ = occurrence(b,12,7);
    cout<<occ.first<<" "<<occ.second<<endl;

    occ = occurrence(b,12,5);
    cout<<occ.first<<" "<<occ.second<<endl;

    return 0;
}