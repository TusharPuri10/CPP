#include <iostream>
using namespace std;

int binarySearch(int a[],int size, int key)
{
   int start = 0, end = size-1 ;
   int mid = start + (end - start)/2;
   while(start <= end)
   {
        if(a[mid] == key)
            return mid;
        else if(a[mid] < key)//search on right
            start = mid + 1;
        else if(key < a[mid])//search on left
            end = mid - 1;
        mid = start + (end - start)/2;
   }
   return -1;
}
// always use if elseif elsif rather than if if if
int main()
{
    int even[6]={1,3,5,6,7,9};
    int odd[5]={2,4,6,8,10};

    int evenindex = binarySearch(even,6,9);
    int oddindex = binarySearch(odd,5,10);
    cout<<evenindex<<endl;
    cout<<oddindex<<endl;
    return 0;
}