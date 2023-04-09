#include<iostream>
#include<stdlib.h>
using namespace std;
class A{

    public:
        A(){
            cout<<"A const.\n";
        }
        virtual void display()
        {
            cout<<"sujal A"<<endl;
        }
};
class B: public A
{

    public:
        B(){
            cout<<"B const.\n";
        }
        void display()
        {
            cout<<"sujal B"<<endl;
        }
        void display2()
        {
            cout<<"sujal b 2"<<endl;
        }
    
};
int main()
{

    // B *obj = new A(); // chidl -> parent error
    // obj->display();

    A *obj = new B();
    obj->display();
    // obj->display2(); // error


    return 0;
}