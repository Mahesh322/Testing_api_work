#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <bits/stdc++.h>
using namespace std;
double beta_function(double,double);
double gamma_function(double);
void gamma_function();
int main()
{
	double num1,num2;
	cout<<"Enter two value to calculate BETA function result of them"<<endl;
	cin>>num1>>num2;
	double beta_output = beta_function(num1,num2);
	cout<<"\nResult of beta function calculation is: "<<beta_output<<endl;

	double n;
	cout<<"\nEnter the number to compute its gamma_function value";
	cout<<"(number should not be zero, negative or infinity): ";
	cin>>n;
	double ans = gamma_function(n);
	cout<<"\nResult of gamma function is: "<<ans<<endl;
	return 0;
}

double beta_function(double a, double b)
{
	double result= beta(a,b);
	return result;
}

double gamma_function(double n)
{
	double result= tgamma(n);
	return result;
}

