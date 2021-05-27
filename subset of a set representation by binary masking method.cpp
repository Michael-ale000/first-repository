#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"enter the elements you want in the set::";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"its subset are ::";
	for(int i=1;i<pow(2,n);i++)
	{
		vector<int>v;
		int x=i;
		while(x>0){
			int z=x%2;
			v.push_back(z);
			x/=2;
		}
		int p=n-v.size();
		for(int i=0;i<p;i++){
			v.push_back(0);
		}
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(v[i]==1)
			{
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
