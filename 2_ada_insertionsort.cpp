#include<iostream>
#include<vector>
using namespace std;

vector<int> insertionsort(vector<int> v,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int tmp=v[i];
		j=i-1;
		while(j>=0 && tmp<v[j])
		{
//			int tmp;
//			tmp=v[i];
//			v[i]=v[j];
//			v[j]=tmp;
//			i--;
//			j--;
			v[j+1]=v[j];
			j--;
			cout<<"  EXECUTE!  ";
		}
		v[j+1]=tmp;
		for(int p=0;p<n;p++)
		{
			cout<<v[p]<<" ";
		}
		cout<<endl;
	}
	return v;
}

int main()
{
	vector<int> v;
	int i,j,n;
	cout<<"Enter Number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	v=insertionsort(v,n);
	for(i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}	
	
}
