#include <iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    //p = make_pair(2,"abc");
    p = {2,"abcd"};
    pair<int, string> p1 = p;//copy ja rhi hai
    p1.first = 3;
    cout << p.first << " " << p.second <<endl;

    pair<int, string> &p2 = p;//referenece used, reference ja rha hai i.e. same hi cheez hai
    p2.first = 3;
    cout << p.first << " " << p.second <<endl;

    // pairs are used to maintain relationship between two things
    // like elements of two arrays at same position are related so we can make array of pairs instead
    pair<int,int> arr[3]; // we dont do it like that instead we make vector of pair
    arr[0] = {1,1};
    arr[1] = {2,2};
    arr[2] = {3,3};
    for(int i=0;i<3;i++)
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    return 0;
}