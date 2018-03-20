#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int guess;
int response = 0;
int tries = 0;

int main()
{
srand (time(0));	
cout <<"Guess a number between 1 and 100"<<endl;
guess = rand() % 100;
cout <<guess<<endl;



while (response != guess && tries < 6)
{
	cout <<"What is your guess"<<endl;
	cin>> response;
	
	if (response > guess)
	{
		cout <<"Your number is too large\n"<<endl;
	}
	
	else if (response < guess)
	{
		cout<<"Your number is too small\n"<<endl;
	}
	tries += 1;
}
 if (guess == response)
 {
 	cout <<"Yay that's the number\n"<<endl;
 }
 else
 {
 	cout <<"6 Tries?? Well better lack next time! The number was "<< guess<<" btw"<<endl;
 }
}
