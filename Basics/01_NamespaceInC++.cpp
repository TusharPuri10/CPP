#include <iostream>
using namespace std;

// Varibale __cpp_lib_scoped_lock
// local variable -> gloabal variable -> namespace!

namespace std1//namespace kahi store nhi hota , code ko manage karta hai, code ko group karta hai aur easy search ho pata hai
{
    int x = 10;
}
namespace std2
{
    int x = 12;
}

int x = 11;

int main()
{
    cout << std1::x << endl;//seedha namespace1 me jaake dhundega
    cout << std2::x << endl;
    cout << x << endl;//pahle local scope me dhundega fir global space me
    return 0;
}