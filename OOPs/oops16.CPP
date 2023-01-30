#include <iostream>
using namespace std;
class Person
{ // class Person
public:
    int a;
    Person()
    {
        cout << "Person::Person() called" << endl;
    } // Base constructor
    Person(int x)
    {
        a = x;
        cout<<a<<endl;
        cout << "Person::Person(int) called" << endl;
    }
};

class Father : virtual public Person
{ // classFatherinheritsPerson
public:
    Father(int x) : Person(x)
    {
        a = 15;
        cout << "Father::Father(int) called" <<a<< endl;
        
    }
};

class Mother : virtual public Person
{ // classMotherinheritsPerson
public:
    Mother(int x) : Person(x)
    {
        a = 20;
        cout << "Mother::Mother(int) called" << a << endl;
    }
};

class Child : public Father, public Mother
{ // classChildinheritsFatherandMother
public:
    Child(int x) : Mother(x), Father(x)
    {
        cout<<a;
        cout << "Child::Child(int) called" << endl;
    }
};

int main()
{
    Child child(10);
    return 0;
}