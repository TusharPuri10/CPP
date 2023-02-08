#include<iostream>
using namespace std;
int main()
{
    char arr[7]={'a','b','\0','c','d','e','\0'};
    cout<<arr<<endl;//ab
    string a="ab\0cde\0";
    cout<<a;//ab
}