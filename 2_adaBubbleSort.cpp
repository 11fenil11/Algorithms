#include<iostream>
#include<vector>
using namespace std;

int count_pass=1;
vector<int> sorrrt(vector<int> a1)
{
	
	int temp,i,j,flag;
	for(i=0;i<(a1.size())-count_pass;i++)
	{
		j=i+1;
		if(a1[i]>a1[j])
		{
			temp=a1[j];
			a1[j]=a1[i];
			a1[i]=temp;
		}
		else
		{
			flag=1;
		}
	}
	count_pass++; 
	return a1;
}
int main()
{ 
	vector<int> a1;
	int n,i,p;
	cout<<"Enter Size ::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a1.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		cout<<a1[i];
	}
//	a1=sorrrt(a1);//1
//	
//	cout<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<a1[i];
//	}
//	cout<<endl;
//	a1=sorrrt(a1);//2
//	for(i=0;i<n;i++)
//	{
//		cout<<a1[i];
//	}	
//	a1=sorrrt(a1);//3
//	cout<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<a1[i];
//	}	
//	a1=sorrrt(a1);//4
//	cout<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<a1[i];
//	}		
//	

	for(p=0;p<n-1;p++)
	{
		a1=sorrrt(a1);//Sorting_pass
		cout<<endl;
		for(i=0;i<n;i++)
		{
			cout<<a1[i];
		}			
	}
	return 0;		
}
