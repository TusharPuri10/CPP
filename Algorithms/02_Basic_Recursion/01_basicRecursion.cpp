#include <iostream>
using namespace std;

void printmsg(string msg,int n)
{
    if(n==0)
        return;
    else
        cout<<msg<<endl;
        printmsg(msg,n-1);
}
int main()
{
    int n;
    string msg;
    cout<<"enter message: ";
    cin>>msg;
    cout<<"Enter how many times to repeat:";
    fflush(stdout);
    cin>>n;
    printmsg(msg,n);
    return 0;
}