// 1 7 9 2 3 0
// 0 1 2 3 7 9 sorted in increasing/non-decreasing order

// What is Selection Sort
// In each different rounds we pick the smallest element and place it in it's correct place

// ex: 64 25 12 22 11
//      0  1  2  3  4

// Round 1 -> 64 25 12 22 '11'....swapping 11 with 16      i=0  j=1 . . 4   4 comparison
//         -> 11|25 12 22  64

// Round 2 -> 11|25 '12' 22 64....swapping 12 with 25      i=1  j=  2 . 4   3 comparison
//         -> 11 12|25  22  64

// Round 3 -> 11 12|25 '22' 64....swapping 22 with 25      i=2  j=    3 4   2 comparison
//         -> 11 12 22| 25  64

// Round 4 -> 11 12 22|'25' 64....swapping 25 with 25      i=3  j=      4   1 comparison
//         -> 11 12 22 25 | 64 ... Obvious that only largest will be remaining in last...so array is sorted


#include <iostream>
using namespace std;

void print(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
void selectionSort(int a[], int size)
{
    print(a,size);
    int i,j;
    for(i=0;i<size-1;i++)
    {
        int mini = i;
        for(j=i+1;j<size;j++)
        {
            if(a[mini]>a[j])
                mini=j;
        }
        if(mini!=j)
            swap(a[mini],a[i]);
        print(a,size);
    }
}
int main()
{
    int a[5] = {64,25,12,22,11};
    selectionSort(a,5);
    return 0;
}

// complexity

//time complexity
// for (0 -> (<n-1))
//      for(i+1 -> (<n))

// as we see in above illustration that for array of size 5 total comparison was 4+3+2+1
//similarly for array of size n total comparison will be n-1 + n-2 + n-3 + n-4 .... 2 + 1 = [n(n-1)]/2 = (n^2 - n)/2 = O(n^2)

//Best case complexity -> array is already sorted -> comparison hoga hi -> O(n^2)
//Worst case complexity -> O(n^2)
// space complexity, O(1),constant...not considering input size in this

// usecase -> whenever array size is small then selection sort is great since space complexity O(1), whenever there will be memory constraint and array size is small