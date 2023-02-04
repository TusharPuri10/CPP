//10 1 7 6 14 9
//1  6 7 9 10 14 sorted in increasing/non-decreasing order

//what is bubble sort
//In every ith round i largest element is set to it's correct place

//Round-1
    // '10' '1' 7 6 14 9
    //  1 '10' '7' 6 14 9
    //  1  7  '10''6'14 9
    //  1  7  6  '10' '14' 9
    //  1  7  6   10  '14' '9'  comparsion end here -> total 5 comparison   j 0->4
    //  1  7  6   10   9  | 14  ...1st largest 14 is now in it's place
//Round-2
    // '1''7' 6   10   9  | 14
    //  1 '7''6'  10   9  | 14
    //  1  6 '7' '10'  9  | 14
    //  1  6  7  '10' '9' | 14  comparsion end here -> total 4 comparison   j 0->3
    //  1  6  7   9  |10    14 ...2nd largest 10 is now in it's place
//Round-3
    // '1''6' 7   9  |10    14
    //  1 '6''7'  9  |10    14
    //  1  6 '7' '9' |10    14  comparsion end here -> total 3 comparison   j 0->2
    //  1  6  7  |9   10    14 ...3rd largest 9 is now in it's place
//Round-4
    // '1''6' 7  |9   10    14
    //  1 '6''7' |9   10    14  comparsion end here -> total 2 comparison   j 0->1
    //  1  6 |7   9   10    14 ...4th largest 7 is now in it's place
//Round-5
    // '1''6'|7   9   10    14  comparsion end here -> total 1 comparison   j 0->0
    //  1 |6  7   9   10    14 ...5th largest 6 is now in it's place...since only one place is remaining then it must also be in correct place that's why entire array is sorted now

#include <iostream>
using namespace std;

void swap(int& x ,int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
void print(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void bubbleSort(int a[],int size)
{
    for(int i=1;i<size;i++)
    {
        bool swp=false;//optimization
        for(int j=0;j<size-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swp=true;//optimization
            }
        }
        if(swp==false)//optimization
            break;
        print(a,size);
    }
    
}
int main()
{
    int a[6]={10,1,7,6,14,9};

    bubbleSort(a,6);
    return 0;
}

//time complexity
//round1 -> n-1 comparison
//round2 -> n-2 comparison
//round3 -> n-3 comparison
//.
//.
//.
//.
//round(n-1) -> 1 comparison
// O(n^2) time complexity

//space complexity -> O(1)

// Best case ( can it be optimised ) we can check that if in any round there's nothing that is swapped that means order is already achieved
// therefore in that case complexity will O(n)

// worst case O(n^2)