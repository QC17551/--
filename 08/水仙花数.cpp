#include<iostream>

using namespace std;

bool is(int n)
{
	int sum = 0;
	int num = n;
	while(n!=0)
	{
		int a = n%10;
		sum += a * a * a;
		n/=10; 
	}
	return sum==num;
}
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		if(is(n))	cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		cin>>n;
	}
	return 0;
}
