#include <iostream>
using namespace std;

class person
{
    int age;
    public:
        void getAge()
        {
            cin >> age;
        }
        void printAge()
        {
            cout << age << endl;
        }
        friend void compareAge(person,person);
};

void compareAge(person p1,person p2)
{
    if(p1.age>p2.age)
        cout << "p1 is daddy" << endl;
    else if(p1.age<p2.age)
        cout << "p2 is daddy" << endl;
    else
        cout << "both are daddy" << endl;
}
int main()
{
    person tushar,yogesh;
    tushar.getAge();
    yogesh.getAge();
    compareAge(tushar,yogesh);
    return 0;
}