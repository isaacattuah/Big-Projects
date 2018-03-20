#include<iostream>
#include <cmath>
using namespace std;



//Variables for program
int x [100],n;
double avg;
double standarddev;
double maxi;
double middle;
double most;
double count;
double tempmost;
double tempcount;
double sk;


//Functions for the program
void getinput();
double mean();
double stdev(double xmean);
double mode();
double median();


int main() 
{
	getinput();
	avg = mean();
	standarddev = stdev(avg);
	maxi = mode();
	middle = median();
	sk = ((4*standarddev)-(3*maxi))/((2*middle)-(6*pow(standarddev,2)));
	cout <<"The value of Sk is "<< sk;
	
}

void getinput()
{
	cout<<"How many elements are you dealing with: ";
	cin >> n;
	
	for (int i=1; i <= n ; i++)
	{
		cin >> x[i];
	}
}

double mean()
{
	double sum = 0;
	for (int i= 1; i <= n;i++)
	{
		sum += x[i]; 
	}	
	return sum/n;
	
}

double stdev(double xmean)
{
	double sum = 0;
	for (int i= 1; i <= n;i++)
	{
		sum += pow((x[i]-xmean),2);
	}	
	return sqrt(sum/n);
}

double mode()
{
	for (int k =1;k<=n;k++)
	{
		double tempmost = x[k];
		int tempcount = 0;
		if(x[k] == tempmost)
		{
			tempcount ++;
		}
		if (tempcount > count)
		{
			most = tempmost;
			count = tempcount;
		}
	}
	return most;
}

double median()
{
 for (int pass = 1; pass <= n-1; pass++)
 {
 	for (int comps =1; comps <= n-pass; comps ++)
 	{
 		if (x[comps] > x[comps + 1])
 		{
 			int c = x[comps];
 			x[comps] = x[comps + 1];
 			x[comps + 1] = c;
 		}
	}
	
}
 if (n % 2 == 1)	
 {
 	int pos = (n+1)/2;
 	return x[pos];
 }
 else
 {
 	int pos = n/2;
 	return (x[pos]+x[pos + 1])/2;
 }
}	


