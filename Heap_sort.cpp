#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sortofheap(vector<int> &v,int &n)
{
	for(int i=((n/2)-1);i>=0;i--)
	{
		if(((2*i)+2)<n)
		{
			if(v[i]>v[(2*i)+1])
			{
				if(v[i]>v[(2*i)+2])
				{
					v[i]=v[i];
				}
				else
				{
					int temp;
					temp= v[i];
					v[i]=v[(2*i)+2];
					v[(2*i)+2]=temp;
				}
			}
			else
			{
				if(v[(2*i)+1]>v[(2*i)+2])
				{
					int temp;
					temp= v[i];
					v[i]=v[(2*i)+1];
					v[(2*i)+1]=temp;				
				}
				else
				{
					int temp;
					temp= v[i];
					v[i]=v[(2*i)+2];
					v[(2*i)+2]=temp;
				}
			}
		}
		else
		{
			if(v[i]<v[(2*i)+1])
			{
				int temp;
				temp= v[i];
				v[i]=v[(2*i)+1];
				v[(2*i)+1]=temp;
			}
		}
	}
}

void swapPlusDecrease(vector<int> &v,int &n)
{
	while(n>1)
	{
		int temp;
		temp= v[0];
		v[0]=v[n-1];
		v[n-1]=temp;
		n=n-1;
		sortofheap(v,n);
	}
}
int main()
{
	vector<int> v;
	int i,flag=1;
	cout<<"1)Add More Value?Flag=1 \n2) Otherwise Flag=0."<<endl;
	while(flag==1)
	{
		int x;
		cin>>x;
		v.push_back(x);
		cout<<"Flag=";
		cin>>flag;
	}
	cout<<"STARTING VECTOR: ";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	int n=v.size();
	sortofheap(v,n);
	swapPlusDecrease(v,n);
	cout<<"SORTED VECTOR:";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
