#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int emNum;
string emName;
int salary;
int allowances;
int grosssalary;
int tax;
int gross;
int net;
int netsalary;
int grossSalary(int k, int r);
int netSalary(int r, int k, int t);
int getData();

int main ()
{
	getData();
	gross = grossSalary(salary, allowances);
	net = netSalary(salary,allowances,tax);
	cout << "Employee #:\t"<<emNum<<endl;
	cout << "Name:\t\t"<<emName<<endl;
	cout << "Salary:\t\t"<<salary<<endl;
	cout << "Tax:\t\t"<< tax<<endl;
	cout << "Gross Pay:\t"<<gross<<endl;
	cout <<"Net Pay:\t"<<net;

}

int getData()
{
	
	cout<<"Input employee number: ";
	cin >> emNum;
	cout <<"What is your name: " ;
	cin >> emName;
	cout <<"What is your salary(integer): ";
	cin >> salary;
	allowances = 0.123 * salary;
	tax = 0.3 * salary;
}

int grossSalary(int k, int r)
{
	grosssalary = k + r;
	return grosssalary;	
}

int netSalary(int r, int k, int t)
{
	netsalary = (r + k)-t;
}


