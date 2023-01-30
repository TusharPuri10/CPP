#include <iostream>
#include<cmath>
#include <vector>
using namespace std;

int squareRoot(int x)
{
    int i;
    for(i = 2; i <=x/2; i++)
    {
        if(i*i > x)
            break;
    }
    return i-1;
}

void forAllNPRimeOrNot(int x)
{
    for(int i = 2; i < x; i++)
    {
        if( x%i == 0)
        {
            cout << "not prime number " << endl;
            return;
        }
    }
    cout << "prime number " << endl;
}

void forHalfNPrimeOrNot(int x)
{
    for(int i = 2; i <= x/2; i++)
    {
        if( x%i == 0)
        {
            cout << "not prime number " << endl;
            return;
        }
    }
    cout << "prime number " << endl;
}

void forSqrNPrimeOrNot(int x)
{
    for(int i = 2; i <= sqrt(x); i++)
    {
        if( x%i == 0)
        {
            cout << "not prime number " << endl;
            return;
        }
    }
    cout << "prime number " << endl;
}

void forSqrN1PrimeOrNot(int x)
{
    for(int i = 2; i <= squareRoot(x); i++)
    {
        if( x%i == 0)
        {
            cout << "not prime number " << endl;
            return;
        }
    }
    cout << "prime number " << endl;
}

void primeVector(int x)//0 -> not prime
{   
    vector<int> prime;
    int flag = 0;
    prime.push_back(2);
    int i=2;
    while(prime[prime.size()-1]<x)
    {
        ++i;
        for(int j=1; j<=prime.size(); ++j)
        {
            if(i%prime[prime.size()-j]==0)
                ++flag;
        }
        if(flag==0)
            prime.push_back(i);
        flag=0;
    }
    if(prime[prime.size()-1]==x)
        cout <<"prime number"<<endl;
    else
        cout<<"not prime number"<<endl;
}

// int primeNew(int x)// 0-> not prime 1->prime
// {   
//     int i=2;
//     while(i<=x)
//     {
//         if(x%i == 0)
//         {
//             return 0;
//         }
//         else
//             {
//                 sumit:
//                 ++i;
//                 if(primeNew(i) == 0)
//                     goto sumit;
//             }
//     }
//     return 1;
//try kia tha but whi same approach hai upar wale me
// }

int main()
{
    int num;
    cin>>num;

    forAllNPRimeOrNot(num);
    forHalfNPrimeOrNot(num);
    forSqrNPrimeOrNot(num);
    forSqrN1PrimeOrNot(num);
    primeVector(num);
    // if(primeNew(num) == 0)
    // {
    //     cout<<"not prime number"<<endl;
    // }
    // else
    // {
    //     cout <<"prime number"<<endl;
    // }
    return 0;
}