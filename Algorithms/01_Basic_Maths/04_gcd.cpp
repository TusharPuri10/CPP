#include <iostream>

using namespace std;

int Gcd(int x, int y)
{
    if(x==0 || y==0) return (x>=y)?x:y;
    else return Gcd(y%x,x);
}
int main()
{
    //It is always asked to find gcd of two numbers because it is pointless to find gcd of whole array.
    int num1, num2;
    cin >> num1 >> num2;
    
    //method-1 Noob
    int gcd;
    if(num1 == num2)
        gcd = num1;
    else
    {
        int x = (num1<num2)?(num1):(num2);
        for(int i = 1; i <= x; i++)
        {
            if(num1%i==0 && num2%i==0)
                gcd = i;
        }
    }
    cout<<gcd<<endl;

    //method-2 recursion
    if(num1<=num2)
        cout<<Gcd(num1,num2);
    else
        cout<<Gcd(num2,num1);
    return 0;
}