#include <iostream>
#include <cmath>
using namespace std;
double cosx, result, x ;
int n,k,i;
double cosFunc(double k);

int main()
{
	cout <<"What is your x value: ";
	cin >> x;
	cout <<"What is your n value: ";
	cin >> n;
	
	while (n <= 0)
	
	{
		cout<<"Value of n must be greater than 0: ";
		cin >> n;
		
    } 
	
	result = cosFunc(x);
    cout<<"The value of cosx is "<< result;  
}

double cosFunc(double k)
{
	cosx = 1;
	k=1;
	for (i =2; i<=2*n ;i+=2)
	{
		cosx = cosx + (pow(-1,k)*pow(x,2*n))/i;
	}
	return cosx;
}

