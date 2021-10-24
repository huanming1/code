#include<iostream>
#include<algorithm>
using namespace std;
int w[30001];
int z[30001];
int f[30001];
int main(){
	int n,m,i,j,sum=0;
	cin>>m>>n;
	for(i=1;i<=n;i++)
	cin>>w[i]>>z[i];
	for(i=1;i<=n;i++)
	for(j=m;j>w[i];j--)
	{
		if(f[j]<f[j-w[i]]+w[i]*z[i])
		{
			f[j]=f[j-w[i]]+w[i]*z[i];
		}
	}
	cout<<f[m];
	return 0;
}
