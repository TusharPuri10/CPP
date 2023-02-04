// 5 2 6 9 4

// 5
//Round-1// 5 2 -> 5 '5' -> "2" 5   //1 comparison
//Round-2// 2 5 6 // 0 comaprison // worst->2
//Round-3// 2 5 6 9 // 0 comaparison // worst->3
//Round-4// 2 5 6 9 4 -> 2 5 6 9 '9' -> 2 5 6 '6' 9 -> 2 5 '5' 6 9 -> 2 "4" 5 6 9 // 3 comparison //worst ->4

// another example
// 4 12 11 20

// 4
//Round-1// 4 12
//Round-2// 4 12 11 -> 4 12 '12' -> 4 "11" 12
//Round-3// 4 11 12 20

// another example
// 6 5 4 3 2 1

// 6
//Round-1// 6 5 -> 6 '6' -> "5" 6"
//Round-2// 5 6 4 -> 5 6 '6' -> 5 '5' 6 -> 4" 5 6
//Round-3// 4 5 6 3 -> 4 5 6 '6' -> 4 5 '5' 6 -> 4 '4' 5 6 ->" 3" 4 5 6
//Round-4// 3 4 5 6 2 -> 3 4 5 6 '6' -> 3 4 5 '5' 6 -> 3 4 '4' 5 6 -> 3 '3' 4 5 6 -> "2" 3 4 5 6
//Round-5// 2 3 4 5 6 1 -> 2 3 4 5 6 '6' -> 2 3 4 5 '5' 6 -> 2 3 4 '4' 5 6 -> 2 3 '3' 4 5 6 -> 2 '2' 3 4 5 6 -> "1" 2 3 4 5 6

#include <iostream>
using namespace std;

void print(int a[], int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void insertionSort(int a[], int size)
{
    int key,j;
    for(int i=1;i<size;i++)//0th element already sorted
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
        print(a,size);
    }
}
int main()
{
    int a[6]={6,5,4,3,2,1};
    int b[5]={5,2,6,9,4};
    int c[4]={4,12,11,20};

    insertionSort(a,6);//swap nhi shift karte hai
    cout<<endl;
    insertionSort(b,5);
    cout<<endl;
    insertionSort(c,4);
    cout<<endl;
    insertionSort(a,6);
    cout<<endl;
    return 0;
}

//usage -> adaptable algorithm and stable algorithm 
// n small then good performance or if array is partially sorted

// Space complexity O(1)
//Time complexity   //worst case 1+2+3+...+n-1 = O(n^2) //Best case 1+1+1+1...+1 O(n)