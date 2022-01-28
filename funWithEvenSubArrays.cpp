#include<iostream>
using namespace std;
int count(int a[],int n)
{
	int cnt=0,step=0,x=a[n-1],i=n-1;
	while(i>=0)
	{
		while(a[i]==x && i>=0)
		{
			cnt++;
			i--;
		}
		if(i<0)
			break;
		step++;
		i-=cnt;
		cnt*=2;
	}
	return step;
}
int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<count(a,n);
		cout<<"\n";
		t--;
	}
}