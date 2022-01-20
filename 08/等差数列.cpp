#include<iostream>
#include<algorithm>
using namespace std;

const int N=1010;
int a[N];

bool dengcha(int m)
{
	int x = a[1]-a[0];
	for(int i=0;i<m-1;i++)
	{
		if(a[i+1]-a[i]!=x)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(dengcha(n))	cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		cin>>n;
	}	
	return 0;
}
