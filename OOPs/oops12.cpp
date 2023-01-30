#include <iostream>
using namespace std;

class fun{
    int a,b,c;
    public:
        fun(){}
        fun(int a,int b = 12)
        {
            this->a = a;
            this->b = b;
            c = 0;
        }
        fun(int a,int b,int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void show(void);
};
void fun::show()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c is " << c << endl;
    cout << endl;
}
int main()
{
    fun a1,a2,a3,a4;//declared variables //default constructor will be called
                 // if there is no default constructor above line will give an error
                // it will be dynamic intialization if we will take the value from user
    a1.show();
    a2 = fun(11);
    a2.show();
    a3 = fun(22,33);
    a3.show();
    a4 = fun(33,34,35);
    a4.show();

    return 0;
}