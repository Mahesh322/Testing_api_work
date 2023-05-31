#include<iostream>
#include<string>
using namespace std;
int count_sum_non_rec(int*, int);
int count_sum_rec(int *, int);

int main()
{
	string num;
	cout<<"Enter your number: ";
	cin>>num;
	int n=num.length();
	int element[n];
	for(int i=0;i<n;i++)
	{
		element[i]= num[i]-'0';
	}
	int non_rec_answer=count_sum_non_rec(element,n);
	cout<<"\n\nResult returned from non-Recursive function: "<<non_rec_answer<<endl;

	int rec_answer= count_sum_rec(element,n);
	cout<<"\nResult returned from Recursive function: "<<rec_answer<<endl;
}

int count_sum_non_rec(int* num,int n)
{
	int total=0;
	for(int i=0;i<n;i++)
	{
		total= total + num[i];
	}
	return total;
}
int count_sum_rec(int* num,int n)
{
	if (n <= 0)
        return 0;
    return (count_sum_rec(num, n - 1) + num[n - 1]);
}
