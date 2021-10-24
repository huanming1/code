#include<iostream>
using namespace std;
char a[501][501];
int x,y,ans;
int main(){
	cin>>x>>y;
	for(int i=1;i<=x;i++)
	 for(int j=1;j<=y;j++)
	 	cin>>a[i][j];
	 for(int i=1;i<=x;i++)
	  for(int j=1;j<=y;j++)
	  	if(a[i][j]=='0'&&a[i-1][j]=='*'&&a[i+1][j]=='*'&&a[i][j-1]=='*'&&a[i][j+1]=='*')
	  	ans++;
	cout<<ans;
	return 0;
}
