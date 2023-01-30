#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++)// O(n.log(n))
        {
            long long x;
            cin>>x;
            bags.insert(x);
        }
        long long total_candies = 0;
        for(int i=0;i<k;i++)// O(k.log(n))
        {
            auto last_it = (--bags.end());
            long long candy_count = *last_it;
            total_candies += candy_count;
            bags.erase(last_it);//logn
            bags.insert(candy_count/2);//logn
        }
        cout<<total_candies<<endl;
    }
    return 0;
}