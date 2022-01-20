#include<iostream>
#include<string>

using namespace std;
const int N=10010;
string s[N];

int maxyinzi(int num)
{
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
			return num/i;
	}
}
int func(string str)
{
	int num=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		num=num*10+(str[i]-'0');
	}
	return num==0?0:maxyinzi(num);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	
	for(int i=0;i<n;i++)
	{
		string str=s[i];
		cout<<func(str)<<endl;	
	}	
	return 0;
}

//3
//sdf0ejg.f?9f
//?4afd0s&amp;2d79*(g
//abcde
