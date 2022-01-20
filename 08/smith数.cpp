#include<iostream>

using namespace std;

bool is_prime(int n)
{
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)	return false;
	}
	return true;
}
int Sum(int n)
{
	int sum=0;
	while(n!=0)
	{
		int a=n%10;
		sum += a;
		n/=10;	
	}
	return sum; 
}

bool is_smith(int n)
{
	int sumn=Sum(n);
	int sum_prime=0;
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			sum_prime+=Sum(i);
			n/=i;
		}
	} 
	if(sumn==sum_prime)	return true;
	return false;
}
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		if(is_smith(n))	cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		cin>>n;
	}
	
	return 0;
}
