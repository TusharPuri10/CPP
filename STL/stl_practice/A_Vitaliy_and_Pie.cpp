#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map <char, int> m;// upper case + 32 = lower case
    int n;
    cin>>n;
    int keys_to_buy = 0;
    for(int i=0; i<(2*n)-2; i++)
    {
        char ch;
        if(i%2==0)
        {
            cin>>ch;
            m[ch]++;
        }
        else
        {
            cin>>ch;
            ch = ch + 32;
            auto it = m.find(ch);
            if(it==m.end())
            {
                ++keys_to_buy;
            }
            else
            {
                --m[ch];
                if(m[ch]==0)
                    m.erase(it);
            }
        }
    }
    cout<<keys_to_buy;
    return 0;
}