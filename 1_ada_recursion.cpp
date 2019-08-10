#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
		return n*fact(n-1);
}

int main()
{
	int n;
	cout<<"Enter Number to find it's factorial = ";
	cin>>n;
	
	int ans=fact(n);
	cout<<n<<"!= "<<ans;
	return 0;
}

