#include <iostream>
using namespace std;
int var;
int startVal;
int endVal;
int incr;
int conValue;
double centigrade;
double fahrenheit;
int FahrenheitConv1(int y);
int FahrenheitConv2(int y);
int exercise (int y);
int main ()
{
	LOOP:
	cout <<"Choose 1 for simple converter\n";
	cout <<"Choose 2 for dual converter\n";
	cout <<"Choose 3 for table converter\n";
	cin >> var;
	exercise (var);
	if (var != 1 || var != 2 || var!= 3)
	{
		goto LOOP;
	}
}

int exercise(int y)
{
	if (y == 1)
	{
		double centigrade;
		cout << "What is your temperature in centigrade: ";
		cin >> centigrade;
		
		double fahrenheit = (1.8) * (centigrade) + 32;
		cout << "Your temperature is " << fahrenheit << " fahrenheit";
	}

 	else if (y==2)
 	{
	 	cout<<" Press 1 for Fahrenheit to Centigrade converter or 2 for Centigrade to Fahrenheit Converter: ";
		cin >> conValue;
		FahrenheitConv1(conValue);
	}
	else if (y==3)
	{
		cout<<" Press 1 for Fahrenheit to Centigrade converter or 2 for Centigrade to Fahrenheit Converter: ";
		cin >> conValue; //Checks conversion
		cout << " What is your starting value: ";
		cin >> startVal;
		cout << " What is your ending value: ";
		cin >> endVal;
		cout << " What is your increment: ";
		cin >> incr;
		FahrenheitConv2(conValue);
		
	}
	else
	{
	 cout <<"Invalid number. Try again!"<< endl;
	}
	
}






int FahrenheitConv1(int y)
{
	if (y == 2)
	{
		cout <<" What is your temperature in Centigrade: ";
		cin >> centigrade;
		fahrenheit = (1.8)* (centigrade ) + 32;
		cout << centigrade <<" Centigrade is " <<  fahrenheit <<" Degrees Fahrenheit ";
		
	}
	
  else if (y == 1)
  {
  	    cout <<" What is your temperature in Fahrenheit: ";
		cin >> fahrenheit;
	    centigrade = (fahrenheit - 32) / 1.8;
		cout << fahrenheit << " Degrees Fahrenheit is  "<< centigrade <<" Centigrade ";
		
  }
	
  else 
	{
	  cout<<"Invalid Input";	
	}
}
	
int FahrenheitConv2(int y)
{
	if (y == 2 && incr > 0) // Changes centigrade to fahrenheit
	{
		cout <<"Centigrade\t----------\tFahrenheit "<< endl;
		
		
		for (double i = startVal; i <= endVal; i += incr)
		{
			cout <<"\t"<< i << "\t----------\t" << (1.8)* (i) + 32<<endl;
		}
		
	}
	
  else if (y == 1 && incr > 0) // Changes degress to fahrenheit
  {
  	    cout <<"Fahrenheit\t----------\t Centigrade "<< endl;
  	    
  	    for (int i = startVal; i <= endVal; i+= incr)
		{
			cout <<"\t"<< i << "\t---------- \t" << (i - 32)/1.8 <<endl;
		}
		
		
		
  }
  else if (y == 2 && incr < 0) // Chenges centigrade to fahrenheit in reverse order
  {
   
  		cout <<"Centigrade\t----------\tFahrenheit "<< endl;
		
		
		for (double i = startVal; i >= endVal; i += incr)
		{
			cout <<"\t"<< i << "\t----------\t" << (1.8)* (i) + 32<<endl;
		}
  }
  
  else if (y == 1 && incr < 0)
  {
  	    cout <<"Fahrenheit\t---------- \tCentigrade "<< endl;
  	    
  	    for (int i = startVal; i >= endVal; i+= incr)
		{
			cout <<"\t"<< i << "\t----------\t" << (i - 32)/1.8 <<endl;
		}
  }			
  else 
	{
	  cout<<"Invalid Input";	
	}


}
