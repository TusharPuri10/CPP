#include<iostream>
using namespace std;

class chips{
	int lot_number;
	int exp_year;
	static int counter;
	
	public:
		void setdata(void);
		void getdata(void);
		//static void getlist(void);
		static void getcount(void);
};

int chips::counter;
/*void chips::getlist(void){ //not possible for static method to do this because <see definition>
	
}*/
void chips::getcount(void)
{
	cout<<"Number of flavours are "<<counter<<endl;
	//cout<<"lot number: "<<lot_number; //will give error <see definition>
}
void chips::setdata(void)
{
	++counter;
	cout<<"Enter lot number of item: ";
	cin>>lot_number;
	cout<<"Enter expiry year:";
	cin>>exp_year;
}

void chips::getdata(void)
{
	cout<<"lot number: "<<lot_number<<" ,expiry date: "<<exp_year<<" ";//<<" ,flavour number: "<<counter<<endl;
	getcount();
}

int main()
{
	chips Lays[10];
	int n;
	cout<<"Enter the number of flavours you want to input: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n\n";
		Lays[i].setdata();
		Lays[i].getdata();
	}
	cout<<"\n";
	return 0;
}
