#include <iostream>
using namespace std;

void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}
void Delete_1(int a[],int n) // O(n*n)
{
    int del;
    cin>>del;
    for(int i=0;i<n;i++)
    {
        if(a[i] == del)
        {
            int j;
            for(j=i;j<n-1;j++)
            {
                a[j] = a[j+1];
            }
            a[j] = 0;
        }
    }
}
void Delete_2(int a[],int n) // O(n)
{
    int del;
    cin>>del;
    int j=0,i,s=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == del)
        {
            ++s;
            continue;
        }
        a[j] = a[i];
        ++j;
    }
    for(int k=n-s; k<n;k++)
    {
        a[k] = 0;
    }
}
void output(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[100],n;
    cin >> n;
    input(a,n);
    //Delete_1(a,n);
    Delete_2(a,n);
    output(a,n);
    cout << "hello" << endl;
    return 0;
}