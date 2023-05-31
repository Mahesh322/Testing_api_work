#include<iostream>
using namespace std;

struct KYC
{
  string name;
  string DOB;
  string PAN_no;
  string adhaar_no;
  string address;
  float annual_income;
  float savings_under_tax_scheme;
} customer[7];

void input_data(struct KYC *customer)
{
	for(int i=0;i<7;i++)
	{
		cout<<"\n***Enter details of customer "<<i+1<<" ***"<<endl;
		cout<<"\nEnter name: ";
		getline(cin,customer[i].name);
		cout<<"\nEnter Date of Birth(dd/mm/yyyy): ";
		cin>>customer[i].DOB;
		cout<<"\nEnter PAN card number: ";
		cin.ignore();
		getline(cin,customer[i].PAN_no);
		cout<<"\nEnter Adhaar number: ";
		getline(cin, customer[i].adhaar_no);
		cout<<"\nEnter address: ";
		getline(cin,customer[i].address);
		cout<<"\nEnter annual income: ";
		cin>>customer[i].annual_income;
		cout<<"\nEnter savings under tax scheme: ";
		cin>>customer[i].savings_under_tax_scheme;
		cin.ignore();
	}
}
void output_data(struct KYC *customer)
{
	cout<<"\n***entered details***"<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<"\n***Details of customer "<<i+1<<" ***"<<endl;
		cout<<"\n Name: ";
		cout<<customer[i].name;
		cout<<"\n Date of Birth(dd/mm/yyyy): ";
		cout<<customer[i].DOB;
		cout<<"\n PAN card number: ";
		cout<<customer[i].PAN_no;
		cout<<"\n Adhaar number: ";
		cout<<customer[i].adhaar_no;
		cout<<"\n Address: ";
		cout<<customer[i].address;
		cout<<"\n Annual income: ";
		cout<<customer[i].annual_income;
		cout<<"\nsavings under tax scheme: ";
		cout<<customer[i].savings_under_tax_scheme;
		cout<<endl;
	}
}
void computeIncomeTax(struct KYC* customer)
{
	for(int i=0;i<7;i++)
	{
		float income= customer[i].annual_income;
		float savings= customer[i].savings_under_tax_scheme;
		float tax;
		if(income<=500000)
		{
			cout<<"\nNo tax for this customer"<<endl;
			continue;
		}
		else if(income>500000&&income<=1000000)
		{
			if(savings<=150000)
			{
				tax= 0.1*(income-savings);
			}
			else
			{
				tax= 0.1*(income-150000);
			}
		}
		else
		{
			if(savings<=150000)
			{
				tax= 0.2*(income-savings);
			}
			else
			{
				tax= 0.2*(income-150000);
			}
		}
		cout<<"Tax for customer "<<i+1<<" is: "<<tax<<endl;
	}
}
int main()
{
	struct KYC customer_details;
	input_data(customer);
	output_data(customer);
	computeIncomeTax(customer);
	return 0;
}
