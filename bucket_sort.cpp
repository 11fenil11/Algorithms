#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void enterD(vector<float> &v)
{
	int n;
	cout<<"Enter Number of Elements:";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		float x;
		cin>>x;
		v.push_back(x);
	}
}
void display(vector<float> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<" vector["<<i<<"]= "<<v[i]<<"\n";
	}
}

void bucket(vector<float> &v)
{
	vector<vector<float> > b(10);
	//vector<int> c(10,0);
	vector<float> a;
	int i,j,k;
	cout<<"B.size()"<<b.size();
	cout<<"V.size()"<<v.size();
	for(i=0;i<v.size();i++)
	{
		int index=v[i]*10;
		//b[index].resize(1+c[index]);
		//b[index][c[index]]=v[i];
		b[index].push_back(v[i]);
		//cout<<"b["<<index<<"]["<<c[index]<<"]="<<v[i]<<endl;
		//c[index]++;
	}
		
	for(i=0;i<b.size();i++)
	{
		sort(b[i].begin(),b[i].end());	
	}
	cout<<"V.size()"<<v.size();
	for(i=0;i<b.size();i++)
	{
		cout<<"Here in I="<<i;
		for(j=0;j<b[i].size();j++)
		{
			a.push_back(b[i][j]);
			cout<<"a["<<k<<"]="<<b[i][j]<<endl;
			k++;
		}
	}
	display(a);
}

int main()
{
	vector<float> v;
	enterD(v);
	display(v);
	bucket(v);
	return 0;
}
