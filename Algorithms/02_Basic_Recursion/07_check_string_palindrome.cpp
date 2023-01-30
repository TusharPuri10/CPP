#include <iostream>
using namespace std;

int ispalindrome(int start, int end, string str)
{
    if(start>end)
        return 1;
    else if(str[start]!=str[end])
        return 0;
    else
        return ispalindrome(start+1, end-1, str);
}
int main()
{
    string str;
    cin>>str;
    if(ispalindrome(0,str.size()-1,str))
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}