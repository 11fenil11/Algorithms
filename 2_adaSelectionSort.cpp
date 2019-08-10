#include<iostream>
#include<vector>
using namespace std;

vector<int> soort(vector<int> a,int n)
{
	int i,j,temp,min,minj;
	for(i=0;i<n;i++)
	{	
	//	min=a[i];
		minj=i;
		for(j=i+1;j<n;j++)
		{
			if(a[minj]>a[j])
			{
		//		min=a[j];
				minj=j;
			}
		}
		if(minj!=i)
		{
			temp=a[minj];
			a[minj]=a[i];
			a[i]=temp;
		}
		for(int k=0;k<n;k++)
		{
			cout<<a[k];
		}
		cout<<endl;
	}
	return a;
}

int main()
{
	vector<int> v;
	int n,i,j;
	cout<<"Enter Numbers:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		cout<<v[i];
	}
	cout<<endl;
	v=soort(v,n);

			
	return 0;
}
