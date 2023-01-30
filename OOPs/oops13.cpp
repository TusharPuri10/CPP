#include <iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){
            a = 0;
        } // default constructor banana padega
        Number(int a){// agar koi ek aur constructor banaya hai toh
            this->a = a;
        }
        // Number(const Number &obj)
        // {
        //     cout << "Copy constructor called" << endl;
        //     a = obj.a;
        // }
        void display();
};
void Number::display(){
    cout << "Number is " << a << endl;
}
int main()
{
    Number x,y,z(45);

    x.display();
    y.display();
    z.display();

    Number z1;
    z1 = Number(z);// working properly
    z1.display();

    Number y1(y);// also works properly
    y1.display();
    return 0;
}