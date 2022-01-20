#include<iostream>

using namespace std;

bool is_wanshu(int n)
{
	int sum = 0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)	sum+=i;	
	}
	return sum==n;	
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		if(is_wanshu(i))
			cout<<i<<endl;
	}
	return 0;
}
