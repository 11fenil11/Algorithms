#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void bucketsort()
{
	vector<float> v[10];
	int i,j,n,num;
	float arr[100];
	cout<<"Enter How many values you want to enter : ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<i+1<<") : ";
		cin>>arr[i];
	}

	for(i=0;i<num;i++)
	{
		int index=arr[i] / 10; //CHANGE MULTIPLIER VALUE BY DEMAND,if there is sorting 
		v[index].push_back(arr[i]);     //of (0.som)values then (*10) ,when sorting of (1-100) mul is(/10)
	}
	for(i=0;i<10;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	float ans[100];
	int k=0;
	for(i=0;i<10;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			ans[k]=v[i][j];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<ans[i]<<" ";
	}
}
//
//vector<int> bucketsort(vector<float> v, int n)
//{
//	vector<float> a[10];
//	for(int i=0;i<n;i++)
//	{
//		int id=10*v[i];
//		a[id].push_back(v[i]);
//	}
//	for(int i=0;i<10;i++)
//	{
//		sort(a[i].begin(),a[i].end());
//	}
//	for(int i=0;i<10;i++)
//	{
//		a[0].insert(a[0].end(),a[i].begin(),a[i].end());
//	}
//	for(int w=0;w<n;w++)
//	{
//		cout<<a[0][w]<<" ";
//	}
//	return v;
//}

int main()
{
	vector<float> v;
	int i,j,n;
//	cout<<"Enter Number:";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		int x;
//		cin>>x;
//		v.push_back(x);
//	}
	bucketsort();
}
