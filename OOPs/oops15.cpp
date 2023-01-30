#include <iostream> // header file inclusion # preprocessor
using namespace std; // !!

/*The memory is only allocated to the 
variables of the class when the object is created.
 The memory is not allocated to the variables when the class is declared.
  At the same time, single variables can have different values for different objects, 
  so every object has an individual copy of all the variables of the class. 
  But the memory is allocated to the function only once when the class is declared.
   So the objects 
don’t have individual copies of functions only one copy is shared among each object.*/
/*inline function
Inline function is a function that is expanded in line when it is called.

The main use of the inline function in C++ is to save memory space.
 Whenever the function is called, then it takes a lot of time to execute the tasks,
  such as moving to the calling function. If the length of the function is small, 
  then the substantial amount of execution time is spent in such overheads, 
  and sometimes time taken required for moving to
 the calling function will be greater than the time taken required to execute that function.
*/
/*When a static data member is created, 
there is only a single copy of the data member which is shared between
 all the objects of the class. As we have discussed in our previous lecture that
 if the data members are not static then every object has an individual copy of
  the data member and it is not shared.

  When a static method is created, they become independent of any object and class.
   Static methods can only access static data members and static methods.
   Static methods can only be accessed using the scope resolution operator.
  */

class chips // class is a user defined data type which is used as template for creating objects. members are private by default in class
{
    //private: private is access specifier - alll th data members under private are only accesible inside the class.they are not accessible outside class
    int lot;
    int exp;
    // static int counter;//by deafault value 0
    // static void getcount(); /// ahhhh!!!!!! BLUNDERRRRRRRRRR
    public: // private is access specifier - alll th data members under private are accesible by any function that is both outsiide and inside the class
        void get_data();// void because function does'nt return anything // only declaration of function
        void print_data()
        {
            cout << lot << exp << endl;
        }
        // chips()//default constructor daalna hi padta hai agar ham koi aur parametrized constructor bana rahe hai to
        // {
        //     lot=0;
        //     exp=0;
        // }
        // /*constructor A constructor is a special member function with the same 
        // name as the class. The constructor doesn’t have a return type. 
        // Constructors are used to initialize the objects of its class.
        //  Constructors are automatically invoked whenever an object is created.
         
        //  Parameterized constructors are those constructors that take one or more parameters.
        //   Default constructors are those constructors that take no parameters
        //  . The main things to note here are
        //   that constructors are written in the public section of the class and the constructors don’t have a return type.
        //  Constructor overloading is a concept in which one class can have multiple constructors with different parameters.
        //   The main thing to note here is that the constructors will run according to the arguments 
         
        //  Default arguments of the constructor are those which are provided in the constructor declaration.
        //  It is recommended to write default arguments after the other arguments.
        //  */
        
        // chips(int lot)//parametrized constructor //this pointer
        // {
        //     this->lot = lot;//The this pointer is a pointer accessible only within the nonstatic member functions of a class , struct , or union type. It points to the object for which the member function is called. Static member functions don't have a this pointer.
        //     exp = 100;
        // }
        // chips(int lot,int exp)//constructor overloading : In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments
        // {
        //     this->lot = lot;
        //     this->exp = exp;
        // }
        // chips(int lot,float exp = 14) // Default arguments are those values which are used by the function if we don’t input our value. It is recommended to write default arguments after the other arguments
        // {
        //     this->lot = lot;
        //     this->exp = (int) exp;//Type casting refers to the conversion of one data type to another in a program. 
        // }
        
        //~chips()
        // {
        //     cout<<"memory deallocated successfully\n";
        // }
        static int counter;// by default zero
        static void getcount(); // always in public
        friend void add_flavour(chips c1); // decalration of friend function // can be declared in private as well as in public.
        
        /*Overloading Unary Operator: Let us consider to overload (-) unary operator.
         In unary operator function, no arguments should be passed.
          It works only with one class objects.
         It is a overloading of an operator operating on a single operand.*/


//1     // void get_data_bysum(chips c1,chips c2)//member function or method
        // {
        //     lot = c1.flot + c2.lot;
        //     exp = c1.exp + c2.exp;
        //     ++counter;
        // }

//2
        // chips get_data_bysum(chips c1)//member function or method
        // {
        //     chips temp;
        //     temp.lot = lot + c1.lot;
        //     temp.exp = exp + c1.exp;
        //     ++counter;
        //     return temp;
        // }

//3

        void operator-()// unary operator -> one operands.
        {
            exp-=5;
            --lot;
        }
        // chips operator+(chips &c1) // binary operator -> two operands
        // {
        //     chips temp;
        //     temp.lot = lot + c1.lot;
        //     temp.exp = exp + c1.exp;
        //     ++counter;
        //     return temp;
        // }
        friend chips operator+(chips &c1,chips &c2);
        
}sujata,yogesh;

chips operator+(chips &c1,chips &c2) // binary operator -> two operands
        {
            chips temp;
            temp.lot = c2.lot + c1.lot;
            temp.exp = c2.exp + c1.exp;
            ++chips::counter;
            return temp;
        }

void add_flavour(chips c1)
{
    if(c1.exp<200)
        cout<<"flavour added"<<endl;
}

int chips::counter;// bahar likhna static variable ka zaroori hota hai
void chips::getcount(void)// ise andar ya bahar
{
	cout<<"Number of flavours are "<<counter<<endl;
	//cout<<"lot number: "<<lot; //will give error <see definition>
}

void chips::get_data()// function definition // member function // andar ya bahar
{
    cin >> lot >> exp;
    ++counter;
}

int main()// entry part of progrm 
{
    chips Lays[10];
	int n;
	cout<<"Enter the number of flavours you want to input: ";
	cin>>n;
    int i;
    for(i=0;i<n-1;i++)
    {
        Lays[i].get_data();
    }


    //Lays[i].get_data_bysum(Lays[0],Lays[1]);
    //Lays[i] = Lays[0].get_data_bysum(Lays[1]);
    Lays[i] = Lays[0] + Lays[1];
    -Lays[0];
    chips::getcount(); // accessing static methods using scope resoulution operator since it is independent of objects
    for(i=0;i<n;i++)
    {
        Lays[i].print_data();
    }
    cout<<chips::counter;

//dynamic initialization of objects and operator overloading     not covered here
    return 0; // 0 means programs successfully terminated.
}