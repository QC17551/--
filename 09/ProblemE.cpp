#include<iostream>
#include<stack>

using namespace std;

bool func(string str)
{
	stack<char>s;
	for(int i=0;i<str.size();i++)
	{
		char c=str[i];
		if(c=='('||c=='['||c=='{')
			s.push(c);
		if(c==')')
		{
			if(s.empty())	return false;
			else{
				char x=s.top();
				if(x=='(')	s.pop();
				else	return false; 
			}
		}
		if(c==']')
		{
			if(s.empty())	return false;
			else{
				char x=s.top();
				if(x=='[')	s.pop();
				else	return false; 
			}
		}
		if(c=='}')
		{
			if(s.empty())	return false;
			else{
				char x=s.top();
				if(x=='{')	s.pop();
				else	return false; 
			}
		}
	}
	return s.empty(); 
}
int main()
{
	int n;
	cin>>n;
	string str;
	while(n--)
	{
		cin>>str;		
		if(func(str))	cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

//4
//[(d+f)*{}]
//[(2+3))
//()}
//[4(6]7)9
