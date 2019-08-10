#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v,int i,int j,int n,int x)
{
	if(x>v[n-1] || x<v[0])
	{
		cout<<"ERROR: Number not found in given array!"<<endl;
		return 0;
	}
	
	int mid=(i+j)/2;
	if(v[mid] == x)
	{
		cout<<"Found X at "<<mid<<" Position "<<endl;
	}
	else
	{
		if(x<v[mid])
		{
			j=mid;
			binarysearch(v,i,j,n,x);
		}
		else
		{
			i=mid+1;
			binarysearch(v,i,j,n,x);
		}
	}
	cout<<"Loop!"<<endl;
	return 0;
}

int linearsearch(vector<int> &v,int n,int x)
{
	for(int i=1;i<n;i++)
	{
		if(x==v[i])
		{
			cout<<"Number Found At Position:"<<i<<endl;
			return 0;
		}
	}
	cout<<"ERROR:Value not found:";
}

main()
{
	vector<int> v;
	int n,i;
	cout<<"Enter Number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x1;
		cout<<i<<")=";
		cin>>x1;
		v.push_back(x1);
	}
//	sort(v.begin(),v.end());
//	for(i=0;i<n;i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	binarysearch(v,0,n,n,x);
	int option;
	cout<<"(1) For Binarysearch \n (2) For Linearsearch \n (3)To see your array \n (4) To Exit"<<endl;
	cout<<"Enter YOur Option:";
	cin>>option;
			int x;
			cout<<"Enter the number you want to search: ";
			cin>>x;
			
	switch(option)
	{
		case 1:
			sort(v.begin(),v.end());
			cout<<"Sorted Array ";
			for(i=0;i<n;i++)
			{
				cout<<v[i]<<" ";
			}
			binarysearch(v,0,n,n,x);
		break;
		
		case 2:
			
			linearsearch(v,n,x);
		break;
			
		case 3:
			for(i=0;i<n;i++)
			{
				cout<<v[i]<<" ";
			}			
		break;
		
		case 4:
			exit(0);
		default:
			cout<<"Enter Correct Option!";
	}

}
