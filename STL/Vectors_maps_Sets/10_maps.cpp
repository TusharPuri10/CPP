// Given n strings, print unique strings
// in lexiographical order with their,
// frequency
// N<=10^5
// |S| <= 100
// so much difficult without maps
// also hashing bhi nhi kar sakte

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) // O(n) = O(10^5)
    {
        string s;
        cin>>s;
        // itna karne ki bhi zaroorat nhi
        // if(str.find(s)!=str.end())
        // {
        //     auto it = str.find(s);
        //     ++(it->second);
        // }
        // else
        // {
        //     str[s]=1;
        // }
        str[s]++;// O(100 * log(10^5))
        //str[s] us string(key) ka value 0 karega (by deafult) and then ++ will do the job of keeping the frequency of that particular string
        // str me s jo key hoga vo toh by defaultm unique hi hoga naa  
        // str me s toh sorted order me sotre hoge naa  
    }
    // overall -> O(10^5 * 100 * log(10^5))
    for(auto &value: str)
    {
        cout<<value.first<<" - "<<value.second<<endl;
    }
    return 0;
}
// if // |S| <= 10000 then this question can not be done