#include<iostream>
#include<algorithm>
using namespace std;

const int N=11;
int a[N][N];
int sum[2*N+1];

int main()
{
	int m;
	cin>>m;
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(i==j)	sum[2*m]+=a[i][j];//���Խ��� 
			if(i+j==m-1)	sum[2*m+1]+=a[i][j];//���Խ��� 
		}			
	}	
	
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			sum[i]+=a[i][j];//����֮�� 
			
	for(int j=0;j<m;j++)
		for(int i=0;i<m;i++)
			sum[j+m]+=a[i][j];//����֮�� 
	
	
	sort(sum,sum+2*m+2);
	
	for(int i=2*m+1;i>=0;i--)
		cout<<sum[i]<<" ";
	return 0; 
}
//���룺
//4
//15 8 -2 6
//31 24 18 71
//-3 -9 27 13
//17 21 38 69 
