#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isPrime=true;
	cout<<"enter a positive number";
	cin>>num;
	if(num<=1){
		isPrime=false;
	}
		else
		{
			for(int i=2;i<=num/2;i++)
			{
			if(num%i==0)
			{
				isPrime=false;
			}
	}
}
	if(isPrime)
	cout<<"the number is prime";
	else
	cout<<"the number is not prime";
	return 0;
}
