#include<iostream>
using namespace std;

class chips{
	int lot_number[100];
	int exp_year[100];
	int counter=0;
	int search(int);
	void remove(int);
	bool is_expired(int,int);
	public:
		void setdata(void);
		void getdata(void);
		void sell_item(int,int);
};
void chips::setdata(void)
{
	cout<<"Enter lot number of item: ";
	cin>>lot_number[counter];
	cout<<"Enter expiry year:";
	cin>>exp_year[counter];
	++counter;
}
void chips::getdata(void)
{
	for(int i=0;i<counter;i++)
	{
		cout<<"lot number: "<<lot_number[i]<<" ,expiry date: "<<exp_year[i]<<endl;
	}
}
int chips::search(int lot_no)
{
	for(int i=0;i<counter;i++)
	{
		if(lot_number[i]==lot_no)
		{
			return i;
		}
	}
	return -1;
}
bool chips::is_expired(int year_of_selling,int j)
{
	if(year_of_selling >= exp_year[j])
	return true;
	else
	return false;
}
void chips::remove(int key)
{
	for(int i=key;i<counter-1;i++)
	{
		lot_number[i]=lot_number[i+1];
		exp_year[i]=exp_year[i+1];
	}
	--counter;
}
void chips::sell_item(int year_of_selling, int lot_no)
{
	cout<<"trying to sell item of lot number "<<lot_no<<" in year"<<year_of_selling<<endl;
	int j = search(lot_no);
	if(j==-1)
		{
			cout<<"Item not available\n";
			return;
		}
	if(is_expired(year_of_selling,j)==true)
	{
		cout<<"Cannot sell item is expired\n";
		return;
	}
		cout<<"Item is fresh\n";
		remove(j);
		cout<<"item sold\n";
}
int main()
{
	chips Lays_Magic_masala;
	Lays_Magic_masala.setdata();
	Lays_Magic_masala.setdata();
	Lays_Magic_masala.setdata();
	Lays_Magic_masala.getdata();
	Lays_Magic_masala.sell_item(2028,123);
		Lays_Magic_masala.getdata();
	Lays_Magic_masala.sell_item(2024,129);
		Lays_Magic_masala.getdata();
	Lays_Magic_masala.sell_item(2024,122);
		Lays_Magic_masala.getdata();
	
	return 0;
}
