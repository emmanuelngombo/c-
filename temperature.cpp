//temperature to Fahrenheit 
#include<iostream>
using namespace std;
int main ()
{
	float celcius,fahrenheit;
	cout<<"Enter the temperature in celcius:";
	cin>>celcius;
	fahrenheit=(celcius*5/9)+32;
	cout<<"endlEquivalent temperature in fahrenheit:"<<fahrenheit;
	cout<<endl;
	return 0;
}